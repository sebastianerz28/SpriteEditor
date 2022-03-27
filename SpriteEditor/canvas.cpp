#include "canvas.h"
#include <QPainter>

Canvas::Canvas(QWidget *parent)
    : QWidget{parent}
{

}

void Canvas::paintEvent(QPaintEvent *event){
       QPainter painter(this);
       painter.setPen(QPen(Qt::black, 12, Qt::DashDotLine, Qt::RoundCap));
       painter.drawLine(0, 0, 200, 200);
}
