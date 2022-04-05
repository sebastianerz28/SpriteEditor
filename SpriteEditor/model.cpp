/**
 *
 *
 *
 */
#include "model.h"
#include "canvas.h"
#include <QTimer>
#include <QJsonObject>
#include <QJsonDocument>
#include <QJsonArray>
#include <QFileDialog>

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

void Model::saveClicked(QString filename){

      QJsonObject saveSprite;
      write(saveSprite, filename);
}

void Model::write(QJsonObject &json, QString filename) const {
    json["width"] = frames.at(0).width();
    json["height"] = frames.at(0).height();
    json["numberOfFrames"] = (int)frames.size();
    QJsonArray frameArray;

    for(int l = 0; l < (int)frames.size(); l++){
        QJsonArray heightArray;
        for(int i = 0; i < frames.at(l).height(); i++){
            QJsonArray widthArray;
            for(int j = 0; j < frames.at(l).width(); j++){
                QColor color = frames.at(l).pixelColor(i, j);

                QJsonArray colorArray;
                colorArray.push_back(color.red());
                colorArray.push_back(color.green());
                colorArray.push_back(color.blue());
                colorArray.push_back(color.alpha());

                widthArray.push_back(colorArray);
            }
            heightArray.push_back(widthArray);
        }
        QString frameName = "frame";
        frameName.append(QString::number(l));
        json[frameName] = heightArray;
        frameArray.push_back(json[frameName]);
    }
    json["frames"] = frameArray;

    QJsonDocument doc;
    doc.setObject(json);
    QFile file(filename);
    file.open(QFile::WriteOnly | QFile::Text | QFile::Truncate);
    file.write(doc.toJson());
    file.close();
}

void Model::read(QJsonObject &json) {
    numberOfFrames = json["numberOfFrames"].toInt();
    QJsonArray frameArray = json["frames"].toArray();

    for(int i = 0; i < frameArray.size(); i++){
        QImage imgAtFrame;
        QJsonArray heights = frameArray.at(i).toArray();
        for(int j = 0; j < heights.size(); j++){
            QJsonArray widths = heights.at(i).toArray();
            for(int k = 0; k < widths.size(); k++){
                QJsonArray colorArray = widths.at(k).toArray();

                QColor color;
                color.setRed(colorArray.at(0).toInt());
                color.setGreen(colorArray.at(1).toInt());
                color.setBlue(colorArray.at(2).toInt());
                color.setAlpha(colorArray.at(3).toInt());

                imgAtFrame.setPixel(j,k, color.rgba());
            }
        }
        frames.push_back(imgAtFrame);
    }
}

