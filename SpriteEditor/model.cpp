#include "model.h"
#include "canvas.h"
#include <QDebug>

Model::Model(QObject *parent)
    : QObject{parent}
{
    frames.push_back(QPixmap(400, 400).toImage());
}

void Model::addFrame(){
    frames.push_back(QPixmap(400, 400).toImage());

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
