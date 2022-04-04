#ifndef MODEL_H
#define MODEL_H

#include <QObject>
#include <QImage>
#include <QSize>
#include <QPainter>
#include "canvas.h"
#include <vector>

using std::vector;

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

signals:
    void sendNextFrame(QImage &image);
    void sendPreviousFrame(QImage &image);
    void sendNextAnimationFrame(QImage &image);
    void sendNextCanvasAnimationFrame(QImage &image);
    void updateCurrentFrameLabel(int, int);
    void pauseAnimation();
    void enableDelete(bool);
    void startAnimation();
private:
    bool deletingFrame = false;
    void emitSendNextCanvasAnimationFrame();
    void emitSendNextAnimationFrame();
    bool animationRunning = false;
    bool canvasAnimationRunning = false;
    void emitPauseAnimation();

};

#endif // MODEL_H
