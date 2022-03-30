#include "canvas.h"

Canvas::Canvas(QWidget *parent) : QWidget{parent}, painter(this) {}


void Canvas::drawLineTo(const QPoint &endPoint)
{
    QPainter painter(&image);
    painter.setPen(QPen(Qt::black, 10, Qt::SolidLine, Qt::RoundCap,
                        Qt::RoundJoin));
    painter.drawLine(mousePos, endPoint);
    modified = true;

    int rad = (10 / 2) + 2;
    update(QRect(mousePos, endPoint).normalized()
                                     .adjusted(-rad, -rad, +rad, +rad));
    mousePos = endPoint;
}

void Canvas::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        mousePos = event->pos();
        drawing = true;
    }
}

void Canvas::mouseMoveEvent(QMouseEvent *event)
{
    if ((event->buttons() & Qt::LeftButton) && drawing)
        drawLineTo(event->pos());
}

void Canvas::mouseReleaseEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton && drawing) {
        drawLineTo(event->pos());
        drawing = false;
    }
}



void Canvas::paintEvent(QPaintEvent *event) {
//  QPainter imagePainter(&image);

//  auto r1 = rect().adjusted(10, 10, -10, -10);
//  imagePainter.setPen(Qt::white);


//  auto r2 = QRect{QPoint(0, 0), QSize(100, 100)};
//  r2.moveCenter(mousePos);
//  imagePainter.setPen(
//  QPen{Qt::black, 3, Qt::SolidLine, Qt::SquareCap, Qt::MiterJoin});
//  imagePainter.drawRect(r2);

//  QPainter painter(this);
//  painter.drawImage(QPoint(0, 0), image);
    QPainter painter(this);
        QRect dirtyRect = event->rect();
        painter.drawImage(dirtyRect, image, dirtyRect);
}
