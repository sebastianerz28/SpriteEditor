/**
 *
 *
 *
 */
#include "model.h"
#include "canvas.h"
#include <QTimer>
/**
 * @brief Model::Model
 * @param canvasWidth
 * @param canvasHeight
 * @param parent
 */
Model::Model(int canvasWidth, int canvasHeight, QObject *parent)
    : QObject{parent}, canvasWidth(canvasWidth), canvasHeight(canvasHeight)
{
    QPixmap pixmap(canvasWidth, canvasHeight);
    pixmap.fill(Qt::transparent);
    QImage img = pixmap.toImage();
    frames.push_back(img);
}
/**
 * @brief Model::copyFrame
 */
void Model::copyFrame(){
    QImage img = frames.at(currFrame).copy();
    frames.insert(frames.begin()+currFrame+1, img);
    emit sendNextFrame(frames.at(++currFrame));
    emit updateCurrentFrameLabel(currFrame, frames.size());

}
/**
 * @brief Model::addFrame
 */
void Model::addFrame(){
    QPixmap pixmap(canvasWidth, canvasHeight);
    pixmap.fill(Qt::transparent);
    QImage img = pixmap.toImage();
    frames.push_back(img);
    emit updateCurrentFrameLabel(currFrame, frames.size());
}
/**
 * @brief Model::nextFrame
 */
void Model::nextFrame(){
    if(currFrame < (int)frames.size()-1){
        emit sendNextFrame(frames.at(++currFrame));
    }

    emit updateCurrentFrameLabel(currFrame, frames.size());
}
/**
 * @brief Model::prevFrame
 */
void Model::prevFrame(){
    if(currFrame > 0){
        emit sendPreviousFrame(frames.at(--currFrame));
    }

    emit updateCurrentFrameLabel(currFrame, frames.size());
}
/**
 * @brief Model::receiveUpdatedCanvasFrame
 * @param img
 */
void Model::receiveUpdatedCanvasFrame(QImage& img){
    frames.at(currFrame) = img;
}
/**
 * @brief Model::deleteFrame
 */
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
/**
 * @brief Model::deleteFrameRunning
 */
void Model::deleteFrameRunning(){
    if(currFrame != 0){
        emit sendPreviousFrame(frames.at(--currFrame));

        frames.erase(frames.begin()+currFrame+1);
        currAnimationFrame = 0;
        deletingFrame = false;
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
/**
 * @brief Model::emitSendNextAnimationFrame
 */
void Model::emitSendNextAnimationFrame(){
    emit sendNextAnimationFrame(frames.at(currAnimationFrame));
    currAnimationFrame = (currAnimationFrame+1) % frames.size();
}
/**
 * @brief Model::emitSendNextCanvasAnimationFrame
 */
void Model::emitSendNextCanvasAnimationFrame(){
    emit sendNextCanvasAnimationFrame(frames.at(currFrame));
}
/**
 * @brief Model::startAnimationAfterDelete
 */
void Model::startAnimationAfterDelete(){
    emitSendNextAnimationFrame();
}

/**
 * @brief Model::incrementAnimation
 */
void Model::incrementAnimation(){

    if(animationRunning && !deletingFrame){
        QTimer::singleShot(frameRate, this, &Model::emitSendNextAnimationFrame);

        emit enableDelete(true);
    }
    else if (animationRunning && deletingFrame){

        emit enableDelete(false);
        QTimer::singleShot(frameRate, this, &Model::emitPauseAnimation);
    }
}
/**
 * @brief Model::incrementCanvasAnimation
 */
void Model::incrementCanvasAnimation(){
    if(canvasAnimationRunning){
        QTimer::singleShot(frameRate, this, &Model::emitSendNextCanvasAnimationFrame);
        currFrame = (currFrame+1) % frames.size();
    }
}
/**
 * @brief Model::setPlayPauseBool
 * @param play
 */
void Model::setPlayPauseBool(bool play){
    if(!animationRunning){
        animationRunning = play;
        emitSendNextAnimationFrame();
    } else {
        animationRunning = play;
    }
}
/**
 * @brief Model::setCanvasPlayPause
 * @param play
 */
void Model::setCanvasPlayPause(bool play){
    if(!canvasAnimationRunning){
        canvasAnimationRunning = play;
        emitSendNextCanvasAnimationFrame();
    } else {
        canvasAnimationRunning = play;
    }
    emit canDraw(canvasAnimationRunning);
}
/**
 * @brief Model::frameRateChanged
 * @param framesPerSecond
 */
void Model::frameRateChanged(int framesPerSecond){
    frameRate = 1000 / framesPerSecond;
}
/**
 * @brief Model::emitPauseAnimation
 */
void Model::emitPauseAnimation(){
    emit pauseAnimation();
}
