#include "canvas.h"

Canvas::Canvas(QWidget *parent)
    : QWidget{parent}, painter(this)
{



}

void Canvas::mouseMoveEvent(QMouseEvent *event){
    if(event->button() & Qt::LeftButton){
        mousePos = event->pos();
        update();
    }
}

void Canvas::mousePressEvent(QMouseEvent *event){

    if (event->button() == Qt::LeftButton)
    {
        mousePos = event->pos();
        update();
    }
}



void Canvas::paintEvent(QPaintEvent *){
       QPainter imagePainter(&image);

       auto r1 = rect().adjusted(10, 10, -10, -10);
       imagePainter.setPen(Qt::white);
       imagePainter.drawRect(r1);

       auto r2 = QRect{QPoint(0, 0), QSize(100, 100)};
       r2.moveCenter(mousePos);
       imagePainter.setPen(QPen{Qt::black, 3, Qt::SolidLine, Qt::SquareCap, Qt::MiterJoin});
       imagePainter.drawRect(r2);


       QPainter painter(this);
       painter.drawImage(QPoint(0, 0),image);

}
