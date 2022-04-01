#include "model.h"
#include "canvas.h"
#include <QDebug>
#include <QTimer>

Model::Model(QObject *parent)
    : QObject{parent}
{
    QImage img = QPixmap(400, 400).toImage();
    img.fill(Qt::transparent);
    frames.push_back(img);
}

void Model::addFrame(){
    QImage img = QPixmap(400, 400).toImage();
    img.fill(Qt::transparent);
    frames.push_back(img);
}

void Model::nextFrame(){
    if(currFrame < (int)frames.size()-1){
        emit sendNextFrame(frames.at(++currFrame));
    }
}

void Model::prevFrame(){
    if(currFrame > 0){
        emit sendPreviousFrame(frames.at(--currFrame));
    }
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

void Model::incrementAnimation(){
    if(animationRunning){
        QTimer::singleShot(100, this, &Model::emitSendNextAnimationFrame);
        currAnimationFrame = (currAnimationFrame+1) % frames.size();
    }
}
