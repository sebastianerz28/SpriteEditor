#include "canvas.h"
#include <QPainter>

Canvas::Canvas(QWidget *parent, QImage *I)
    : QWidget{parent}, I(I)
{

}

void Canvas::paintEvent(QPaintEvent *){
       QPainter painter(this);
       painter.setPen(QPen(Qt::black, 12, Qt::DashDotLine, Qt::RoundCap));
       painter.drawLine(0, 0, 200, 200);
}
