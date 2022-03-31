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
    explicit Model(QObject *parent = nullptr);
    int currFrame = 0;
public slots:

    void addFrame();
    void nextFrame();
    void prevFrame();
    void receiveUpdatedCanvasFrame(QImage&);
    void deleteFrame();

signals:
    void sendNextFrame(QImage &image);
    void sendPreviousFrame(QImage &image);
};

#endif // MODEL_H
