#include "canvas.h"
#include <QDebug>
#include <QLabel>
#include <QStyleOption>
Canvas::Canvas(QImage _image, int width, int height, QWidget *parent)
    : QLabel{parent}, image(_image), painter(this) {
    this->setStyleSheet("background-color: #DFDFDE");
    this->resize(width, height);
    //    this->setScaledContents(true);
}

/**
 * @brief Canvas::drawLineTo Draws a rectangle at the specified point and sets
 * @param endPoint
 */
void Canvas::drawLineTo(const QPoint &endPoint) {
    QPainter painter(&image);
    painter.setPen(QPen(brushColor));
    if (eraseOn) {
        painter.setCompositionMode(QPainter::CompositionMode_Clear);
    }
    qDebug() << "canvas width: " << this->width();
    qDebug() << "canvas height: " << this->height() << '\n';

    qDebug() << "img width: " << image.width();
    qDebug() << "img height: " << image.height() << '\n';

    double xScaleFactor(this->width() / (double)image.width());
    double yScaleFactor(this->height() / (double)image.height());

    int xCoord = brushSize * ((int)(endPoint.x()/xScaleFactor) / brushSize);
    qDebug() << "x scale factor: " << xScaleFactor;
    int yCoord = brushSize * ((int)(endPoint.y()/yScaleFactor) / brushSize);
    qDebug() << "y scale factor: " << yScaleFactor << '\n';
    painter.fillRect(xCoord, yCoord, brushSize, brushSize, brushColor);

    qDebug() << "x image coord: " << xCoord;
    qDebug() << "y image coord: " << yCoord;

    mousePos = endPoint;
    update();
}
/**
 * @brief Canvas::mousePressEvent
 * @param event
 */
void Canvas::mousePressEvent(QMouseEvent *event) {
    if (event->button() == Qt::LeftButton && !animationPlaying) {
        mousePos = event->pos();
        drawing = true;
        emit updateModelFrames(image);
    }
}
/**
 * @brief Canvas::mouseMoveEvent
 * @param event
 */
void Canvas::mouseMoveEvent(QMouseEvent *event) {
    if ((event->buttons() & Qt::LeftButton) && drawing && !animationPlaying) {
        drawLineTo(event->pos());
        emit updateModelFrames(image);
    }
}
/**
 * @brief Canvas::mouseReleaseEvent
 * @param event
 */
void Canvas::mouseReleaseEvent(QMouseEvent *event) {
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
//    QRect dirtyRect = event->rect();
    QRect rect(0, 0, this->width(), this->height());
    imagePainter.drawImage(rect, image);
}
/**
 * @brief Canvas::brushSizeChanged
 * @param newBrushSize
 */
void Canvas::brushSizeChanged(int newBrushSize) { brushSize = newBrushSize; }
/**
 * @brief Canvas::eraseSelected
 */
void Canvas::eraseSelected() { eraseOn = true; }
/**
 * @brief Canvas::brushSelected
 */
void Canvas::brushSelected() { eraseOn = false; }
/**
 * @brief Canvas::colorDialogSelected
 */
void Canvas::colorDialogSelected() {
    QColor colorSelected = QColorDialog::getColor(brushColor);
    brushColor = (colorSelected);
    eraseOn = false;

    if (colorHistory.size() > 4) {
        QColor removal = colorHistory.back();
        colorHistory.pop_back();
        colorsSet.erase(removal.name());
    }

    if (!colorsSet.count(colorSelected.name())) {
        colorHistory.insert(colorHistory.begin(), colorSelected);
        colorsSet.insert(colorSelected.name());
    }

    emit newCurrentColor("background-color:" + colorSelected.name());

    for (unsigned long i = 0; i < colorHistory.size();
         i++) { // 4 slots of colors to fill
        switch (i) {
        case 0:
            emit firstHistoryChanged("background-color:" + colorHistory.at(i).name());
            break;
        case 1:
            emit secondHistoryChanged("background-color:" +
                                      colorHistory.at(i).name());
            break;
        case 2:
            emit thirdHistoryChanged("background-color:" + colorHistory.at(i).name());
            break;
        case 3:
            emit fourthHistoryChanged("background-color:" +
                                      colorHistory.at(i).name());
            break;
        }
    }
}
/**
 * @brief Canvas::firstHistorySelcted
 */
void Canvas::firstHistorySelcted() {
    if (colorHistory.size() >= 1) {
        brushColor = (colorHistory.at(0));
        emit newCurrentColor("background-color:" + brushColor.name());
        eraseOn = false;
    }
}
/**
 * @brief Canvas::secondHistorySelcted
 */
void Canvas::secondHistorySelcted() {
    if (colorHistory.size() >= 2) {
        brushColor = (colorHistory.at(1));
        emit newCurrentColor("background-color:" + brushColor.name());
        eraseOn = false;
    }
}
/**
 * @brief Canvas::thirdHistorySelcted
 */
void Canvas::thirdHistorySelcted() {
    if (colorHistory.size() >= 3) {
        brushColor = (colorHistory.at(2));
        emit newCurrentColor("background-color:" + brushColor.name());
        eraseOn = false;
    }
}
/**
 * @brief Canvas::fourthHistorySelcted
 */
void Canvas::fourthHistorySelcted() {
    if (colorHistory.size() >= 4) {
        brushColor = (colorHistory.at(3));
        emit newCurrentColor("background-color:" + brushColor.name());
        eraseOn = false;
    }
}
/**
 * @brief Canvas::nextFrameChanged
 * @param frame
 */
void Canvas::nextFrameChanged(QImage &frame) {
    image = frame;
    update();
}
/**
 * @brief Canvas::prevFrameChanged
 * @param frame
 */
void Canvas::prevFrameChanged(QImage &frame) {

    image = frame;
    update();
}
/**
 * @brief Canvas::recieveCanDraw
 * @param value
 */
void Canvas::recieveCanDraw(bool value) { animationPlaying = value; }
