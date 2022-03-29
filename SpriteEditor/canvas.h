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
    void drawLineTo(const QPoint &endPoint);
    void paintEvent(QPaintEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    QImage image = QPixmap(300,300).toImage();
    bool drawing = false;
    bool modified = false;

signals:

};

#endif // CANVAS_H
