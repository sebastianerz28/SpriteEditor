#include "canvas.h"

Canvas::Canvas(QWidget *parent)
    : QWidget{parent}, painter(this)
{
    painter.setPen(QPen(Qt::black, 12));
    this->setStyleSheet("background-color: black");
}

void Canvas::mousePressEvent(QMouseEvent *event){
    if (event->button() == Qt::LeftButton)
    {
        mousePos = event->pos();
        update();
    }
}



void Canvas::paintEvent(QPaintEvent *){
       QPainter painter(this);

       auto r1 = rect().adjusted(10, 10, -10, -10);
       painter.setPen(Qt::white);
       painter.drawRect(r1);

       auto r2 = QRect{QPoint(0, 0), QSize(100, 100)};
       r2.moveCenter(mousePos);
       painter.setPen(QPen{Qt::black, 3, Qt::SolidLine, Qt::SquareCap, Qt::MiterJoin});
       painter.drawRect(r2);
}
