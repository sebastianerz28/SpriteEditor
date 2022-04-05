#include "canvas.h"
#include <QStyleOption>

Canvas::Canvas(QImage _image, QWidget *parent) : QWidget{parent},  image(_image), painter(this) {
    this->setStyleSheet("background-color: #DFDFDE");
}

/**
 * @brief Canvas::drawLineTo Draws a rectangle at the specified point and sets
 * @param endPoint
 */
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
/**
 * @brief Canvas::mousePressEvent
 * @param event
 */
void Canvas::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton  && !animationPlaying) {
        mousePos = event->pos();
        drawing = true;
        emit updateModelFrames(image);
    }
}
/**
 * @brief Canvas::mouseMoveEvent
 * @param event
 */
void Canvas::mouseMoveEvent(QMouseEvent *event)
{
    if ((event->buttons() & Qt::LeftButton) && drawing && !animationPlaying){
        drawLineTo(event->pos());
        emit updateModelFrames(image);
    }
}
/**
 * @brief Canvas::mouseReleaseEvent
 * @param event
 */
void Canvas::mouseReleaseEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton && drawing && !animationPlaying) {
        drawLineTo(event->pos());
        drawing = false;
        emit updateModelFrames(image);
    }
}


/**
 * @brief Canvas::paintEvent
 * @param event
 */
void Canvas::paintEvent(QPaintEvent *event) {
    QStyleOption opt;
    opt.initFrom(this);

    QPainter imagePainter(this);
    style()->drawPrimitive(QStyle::PE_Widget, &opt, &imagePainter, this);
    QRect dirtyRect = event->rect();

    imagePainter.drawImage(dirtyRect, image, dirtyRect);


}
/**
 * @brief Canvas::brushSizeChanged
 * recieves the size of the brush
 * @param newBrushSize
 */
void Canvas::brushSizeChanged(int newBrushSize){
    brushSize = newBrushSize;
}
/**
 * @brief Canvas::eraseSelected
 * used to update model when the eraser should be toggled on or not
 */
void Canvas::eraseSelected(){
    eraseOn = true;
}
/**
 * @brief Canvas::brushSelected
 * used to update model when the eraser should be toggled on or not
 */
void Canvas::brushSelected(){
    eraseOn = false;
}
/**
 * @brief Canvas::colorDialogSelected
 * creates a popup that allows users to select and change the current color of the brush
 * as well as updates the color history presets accordingly
 */
void Canvas::colorDialogSelected(){
    QColor colorSelected = QColorDialog::getColor(brushColor);
    brushColor = (colorSelected);
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
/**
 * @brief Canvas::firstHistorySelcted
 * button that stores the color history of the most recent color
 */
void Canvas::firstHistorySelcted(){
    if(colorHistory.size() >= 1){
        brushColor = (colorHistory.at(0));
        emit newCurrentColor("background-color:" + brushColor.name());
        eraseOn = false;
    }
}
/**
 * @brief Canvas::secondHistorySelcted
 * button that stores the color history of the 2nd most recent color
 */
void Canvas::secondHistorySelcted(){
    if(colorHistory.size() >= 2){
        brushColor = (colorHistory.at(1));
        emit newCurrentColor("background-color:" + brushColor.name());
        eraseOn = false;
    }
}
/**
 * @brief Canvas::thirdHistorySelcted
 * button that stores the color history of the 3rd most recent color
 */
void Canvas::thirdHistorySelcted(){
    if(colorHistory.size() >= 3){
        brushColor = (colorHistory.at(2));
        emit newCurrentColor("background-color:" + brushColor.name());
        eraseOn = false;
    }
}
/**
 * @brief Canvas::fourthHistorySelcted
 * button that stores the color history of the 4th most recent color
 */
void Canvas::fourthHistorySelcted(){
    if(colorHistory.size() >= 4){
        brushColor = (colorHistory.at(3));
        emit newCurrentColor("background-color:" + brushColor.name());
        eraseOn = false;
    }
}
/**
 * @brief Canvas::nextFrameChanged
 * updates the current image to the next frame/ image in the project
 * @param frame
 */
void Canvas::nextFrameChanged(QImage &frame){
    image = frame;
    update();
}
/**
 * @brief Canvas::prevFrameChanged
 * connects the current image to the previous image in the project.
 * @param frame
 */
void Canvas::prevFrameChanged(QImage &frame){

    image = frame;
    update();
}
/**
 * @brief Canvas::recieveCanDraw
 * @param value
 */
void Canvas::recieveCanDraw(bool value){
    animationPlaying = value;
}


