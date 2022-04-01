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
    int canvasHeight;
    int canvasWidth;

public slots:

    void addFrame();
    void nextFrame();
    void prevFrame();
    void receiveUpdatedCanvasFrame(QImage&);
    void deleteFrame();
    void incrementAnimation();

signals:
    void sendNextFrame(QImage &image);
    void sendPreviousFrame(QImage &image);
    void sendNextAnimationFrame(QImage &image);

private:
    void emitSendNextAnimationFrame();
    bool animationStarted = false;

};

#endif // MODEL_H
