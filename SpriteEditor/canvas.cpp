#include "canvas.h"
#include <QDebug>

Canvas::Canvas(QImage _image, QWidget *parent) : QWidget{parent}, painter(this), image(_image) {}


void Canvas::drawLineTo(const QPoint &endPoint)
{
    QPainter painter(&image);
    painter.setPen(QPen(brushColor));
    if(eraseOn){
        painter.setCompositionMode(QPainter::CompositionMode_Clear);
    }

    int xCoord = brushSize * (endPoint.x() / brushSize);
    int yCoord = brushSize * (endPoint.y() / brushSize);


    painter.fillRect(xCoord, yCoord, brushSize, brushSize, brushColor);
    mousePos = endPoint;
    update();
}

void Canvas::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        mousePos = event->pos();
        drawing = true;
        emit updateModelFrames(image);
    }
}

void Canvas::mouseMoveEvent(QMouseEvent *event)
{
    if ((event->buttons() & Qt::LeftButton) && drawing){
        qDebug() << event->position();
        drawLineTo(event->pos());
        emit updateModelFrames(image);
    }

}

void Canvas::mouseReleaseEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton && drawing) {
        drawLineTo(event->pos());
        drawing = false;
        emit updateModelFrames(image);
    }
}



void Canvas::paintEvent(QPaintEvent *event) {
    QPainter painter(this);
        QRect dirtyRect = event->rect();
        painter.drawImage(dirtyRect, image, dirtyRect);
}

void Canvas::brushSizeChanged(int newBrushSize){
    brushSize = newBrushSize;
}

void Canvas::eraseSelected(){
    eraseOn = true;
}

void Canvas::brushSelected(){
    eraseOn = false;
}

void Canvas::colorDialogSelected(){
    QColor colorSelected = QColorDialog::getColor(brushColor, this);
    brushColor = colorSelected;
    eraseOn = false;

    if(colorHistory.size() > 4){
           QColor removal = colorHistory.back();
           colorHistory.pop_back();
           colorsSet.erase(removal.name());
     }

    if(!colorsSet.count(colorSelected.name())){
        colorHistory.insert(colorHistory.begin(), colorSelected);
        colorsSet.insert(colorSelected.name());
    }



    emit newCurrentColor("background-color:" + colorSelected.name());

    for(unsigned long i = 0; i < colorHistory.size(); i++){ // 4 slots of colors to fill
        switch (i){
            case 0:
                emit firstHistoryChanged("background-color:" + colorHistory.at(i).name());
                break;
            case 1:
                emit secondHistoryChanged("background-color:" + colorHistory.at(i).name());
                break;
            case 2:
                emit thirdHistoryChanged("background-color:" + colorHistory.at(i).name());
                break;
            case 3:
                emit fourthHistoryChanged("background-color:" + colorHistory.at(i).name());
                break;
        }
    }
}

void Canvas::firstHistorySelcted(){
    if(colorHistory.size() >= 1){
        //brushColor.setColor(colorHistory.at(1));
        QColor colorSelected = QColorDialog::getColor(colorHistory.at(1), this);
        brushColor = (colorSelected);
        qDebug() << "one";
    }
}
void Canvas::secondHistorySelcted(){
    if(colorHistory.size() >= 2){
        qDebug() << "two";
        QColor colorSelected = QColorDialog::getColor(colorHistory.at(2), this);
        brushColor = colorSelected;
       //brushColor.setColor(colorHistory.at(2));
    }
}
void Canvas::thirdHistorySelcted(){
    if(colorHistory.size() >= 3){
        QColor colorSelected = QColorDialog::getColor(colorHistory.at(2), this);
        brushColor = (colorSelected);
        //brushColor.setColor(colorHistory.at(3));
        qDebug() << "three";
    }
}
void Canvas::fourthHistorySelcted(){
    if(colorHistory.size() >= 4){
        QColor colorSelected = QColorDialog::getColor(colorHistory.at(4), this);
        brushColor = (colorSelected);
        //brushColor.setColor(colorHistory.at(4));
        qDebug() << "four";

    }
}

void Canvas::nextFrameChanged(QImage &frame){

    image = frame;
    update();
}
void Canvas::prevFrameChanged(QImage &frame){

    image = frame;
    update();
}


