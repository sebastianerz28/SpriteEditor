#include "model.h"
#include "canvas.h"
#include <QDebug>
#include <QTimer>

Model::Model(int canvasWidth, int canvasHeight, QObject *parent)
    : canvasWidth(canvasWidth), canvasHeight(canvasHeight), QObject{parent}
{
    QImage img = QPixmap(canvasWidth, canvasHeight).toImage();
    //img.fill(Qt::transparent);
    frames.push_back(img);
}

void Model::addFrame(){
    qDebug() << "frame added";
    QImage img = QPixmap(canvasWidth, canvasHeight).toImage();
    //img.fill(Qt::transparent);
    frames.push_back(img);
}

void Model::nextFrame(){
    if(currFrame < (int)frames.size()-1){
        emit sendNextFrame(frames.at(++currFrame));
    }
    qDebug() << "curr frame is: "<< currFrame;
}

void Model::prevFrame(){
    if(currFrame > 0){
        emit sendPreviousFrame(frames.at(--currFrame));
    }
    qDebug() << "curr frame is: "<< currFrame;
}

void Model::receiveUpdatedCanvasFrame(QImage& img){
    frames.at(currFrame) = img;
}

void Model::deleteFrame(){
    if(currFrame != 0){
        emit sendPreviousFrame(frames.at(--currFrame));
        frames.erase(frames.begin()+currFrame);
    }

}

void Model::emitSendNextAnimationFrame(){
    emit sendNextAnimationFrame(frames.at(currAnimationFrame));
    qDebug() << "curr frame is: "<< currAnimationFrame;
}

void Model::incrementAnimation(){
    QTimer::singleShot(100, this, &Model::emitSendNextAnimationFrame);
    currAnimationFrame = (currAnimationFrame+1) % frames.size();
}

void Model::setPlayPauseBool(bool play){
    qDebug() << "recieved" << play;
    if(!animationRunning){
        animationRunning = play;
        emitSendNextAnimationFrame();
    } else {
        animationRunning = play;
    }

}
