#ifndef MODEL_H
#define MODEL_H

#include <QObject>
#include <QImage>
#include <QSize>
#include <QPainter>
#include "canvas.h"
#include <vector>

using std::vector;
/**
 * @brief The Model class
 */
class Model : public QObject
{
    Q_OBJECT

public:

    vector<QImage> frames;
    explicit Model(int, int, QObject *parent = nullptr);
    int currFrame = 0;
    int currAnimationFrame = 0;
    int canvasWidth;
    int canvasHeight;
    int frameRate;
    void write(QJsonObject &json) const;
    void read(QJsonObject &json);
    int imageWidth;
    int imageHeight;
    int numberOfFrames;

public slots:

    void addFrame();
    void nextFrame();
    void prevFrame();
    void receiveUpdatedCanvasFrame(QImage&);
    void deleteFrame();
    void incrementAnimation();
    void setPlayPauseBool(bool);
    void frameRateChanged(int);
    void incrementCanvasAnimation();
    void setCanvasPlayPause(bool);
    void deleteFrameRunning();
    void startAnimationAfterDelete();
    void copyFrame();

signals:
    void sendNextFrame(QImage &image);
    void sendPreviousFrame(QImage &image);
    void sendNextAnimationFrame(QImage &image);
    void sendNextCanvasAnimationFrame(QImage &image);
    void updateCurrentFrameLabel(int, int);
    void pauseAnimation();
    void enableDelete(bool);
    void startAnimation();
    void canDraw(bool);


private:
    bool deletingFrame = false;
    void emitSendNextCanvasAnimationFrame();
    void emitSendNextAnimationFrame();
    bool animationRunning = false;
    bool canvasAnimationRunning = false;
    void emitPauseAnimation();

};

#endif // MODEL_H
