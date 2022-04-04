#include "model.h"
#include "canvas.h"
#include <QDebug>
#include <QTimer>

Model::Model(int canvasWidth, int canvasHeight, QObject *parent)
    : QObject{parent}, canvasWidth(canvasWidth), canvasHeight(canvasHeight)
{
    QPixmap pixmap(canvasWidth, canvasHeight);
    pixmap.fill(Qt::transparent);
    QImage img = pixmap.toImage();
    frames.push_back(img);
}

void Model::addFrame(){
    qDebug() << "frame added";
    QPixmap pixmap(canvasWidth, canvasHeight);
    pixmap.fill(Qt::transparent);
    QImage img = pixmap.toImage();
    frames.push_back(img);
    emit updateCurrentFrameLabel(currFrame, frames.size());
}

void Model::nextFrame(){
    if(currFrame < (int)frames.size()-1){
        emit sendNextFrame(frames.at(++currFrame));
    }
    qDebug() << "curr frame is: "<< currFrame;
    emit updateCurrentFrameLabel(currFrame, frames.size());
}

void Model::prevFrame(){
    if(currFrame > 0){
        emit sendPreviousFrame(frames.at(--currFrame));
    }
    qDebug() << "curr frame is: "<< currFrame;
    emit updateCurrentFrameLabel(currFrame, frames.size());
}

void Model::receiveUpdatedCanvasFrame(QImage& img){
    frames.at(currFrame) = img;
}

void Model::deleteFrame(){
    if(!animationRunning && currFrame != 0){
        frames.erase(frames.begin()+currFrame);
        emit sendPreviousFrame(frames.at(--currFrame));
    }else if (!animationRunning && currFrame == 0 && frames.size()>1){
        frames.erase(frames.begin());
        emit sendNextFrame(frames.at(currFrame));
    } else if(animationRunning){
        deletingFrame = true;
    }

    emit updateCurrentFrameLabel(currFrame, frames.size());
}
void Model::deleteFrameRunning(){
    if(currFrame != 0){
        emit sendPreviousFrame(frames.at(--currFrame));
        qDebug() << currFrame;
        frames.erase(frames.begin()+currFrame+1);
        currAnimationFrame = 0;
        deletingFrame = false;

        //        frames.erase(frames.begin()+currFrame);
        //        qDebug() << currFrame-1;
        //        emit sendPreviousFrame(frames.at(--currFrame));
        //        currAnimationFrame = 0;
        //        deletingFrame = false;

        emit startAnimation();
    }else if (currFrame == 0 && frames.size()>1){
        frames.erase(frames.begin());
        emit sendNextFrame(frames.at(currFrame));
        currAnimationFrame = 0;
        deletingFrame = false;

        emit startAnimation();
    }
    else if (currFrame == 0 && frames.size() == 1){
        deletingFrame = false;
        emit startAnimation();
    }
    emit updateCurrentFrameLabel(currFrame, frames.size());

}

void Model::emitSendNextAnimationFrame(){
    qDebug() << "entered sendNextAnimationFrame";
    emit sendNextAnimationFrame(frames.at(currAnimationFrame));
}

void Model::emitSendNextCanvasAnimationFrame(){
    emit sendNextCanvasAnimationFrame(frames.at(currFrame));
}

void Model::incrementAnimation(){
    qDebug() << "entered incrementAnimation";
    qDebug() << "animationRunning: " << animationRunning << " deletingFrame: "<< deletingFrame;
    if(animationRunning && !deletingFrame){
        QTimer::singleShot(frameRate, this, &Model::emitSendNextAnimationFrame);
        currAnimationFrame = (currAnimationFrame+1) % frames.size();
        emit enableDelete(true);
    }
    else if (animationRunning && deletingFrame){
        emit enableDelete(false);
        emit pauseAnimation();
    }
}

void Model::incrementCanvasAnimation(){
    if(canvasAnimationRunning){
        QTimer::singleShot(frameRate, this, &Model::emitSendNextCanvasAnimationFrame);
        currFrame = (currFrame+1) % frames.size();
    }
}

void Model::setPlayPauseBool(bool play){
    if(!animationRunning){
        animationRunning = play;
        emitSendNextAnimationFrame();
    } else {
        animationRunning = play;
    }
}

void Model::setCanvasPlayPause(bool play){
    if(!canvasAnimationRunning){
        canvasAnimationRunning = play;
        emitSendNextCanvasAnimationFrame();
    } else {
        canvasAnimationRunning = play;
    }
}

void Model::frameRateChanged(int framesPerSecond){
    frameRate = 1000 / framesPerSecond;
}
