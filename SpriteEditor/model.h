#ifndef MODEL_H
#define MODEL_H

#include <QObject>
#include <QImage>
#include <QSize>
#include <QPainter>
#include "canvas.h"

class Model : public QObject
{
    Q_OBJECT
    Canvas *canvas;
public:
    explicit Model(QObject *parent = nullptr, Canvas *canvas = nullptr);
    QSize size = QSize(640,480);
    QImage::Format format = QImage::Format_ARGB32;
    QImage panel = QImage(size, format);

signals:

};

#endif // MODEL_H
