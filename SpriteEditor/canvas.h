#ifndef CANVAS_H
#define CANVAS_H

#include <QWidget>
#include <QImage>
#include <QMouseEvent>
#include <QPainter>
#include <QPoint>

class Canvas : public QWidget
{
    Q_OBJECT
public:
    Canvas(QWidget *parent = nullptr);

protected:
    QPainter painter;
    QPoint mousePos;
    void paintEvent(QPaintEvent *event);
    void mousePressEvent(QMouseEvent *event);
    QImage image = QPixmap(300,300).toImage();
    void mouseMoveEvent(QMouseEvent *event);
signals:

};

#endif // CANVAS_H
