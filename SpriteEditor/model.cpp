#include "model.h"
#include "canvas.h"
#include <QDebug>
#include <QTimer>

Model::Model(QObject *parent)
    : QObject{parent}
{
    QImage img = QPixmap(400, 400).toImage();
    //img.fill(Qt::transparent);
    frames.push_back(img);
}

void Model::addFrame(){
    QImage img = QPixmap(400, 400).toImage();
    //img.fill(Qt::transparent);
    frames.push_back(img);
    if(!animationStarted){
        animationStarted = true;
        emit sendNextAnimationFrame(frames.at(currAnimationFrame));
    }

    qDebug() << "frame added";
    qDebug() << frames.size();
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
