#ifndef CANVAS_H
#define CANVAS_H

#include <QWidget>
#include <QImage>
#include <QMouseEvent>
#include <QPainter>
#include <QPoint>
#include <QColorDialog>
#include <unordered_set>

class Canvas : public QWidget
{
    Q_OBJECT
public:
    Canvas( QImage _image, QWidget *parent = nullptr);
    int brushSize;
    QColor brushColor;
    QImage image;

protected:
    QPainter painter;
    QPoint mousePos;
    void drawLineTo(const QPoint &endPoint);
    void paintEvent(QPaintEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);



    bool drawing = false;
    bool modified = false;
    bool eraseOn = false;
    std::vector<QColor> colorHistory;
    std::unordered_set<QString> colorsSet;

signals:
    void firstHistoryChanged(QString);
    void secondHistoryChanged(QString);
    void thirdHistoryChanged(QString);
    void fourthHistoryChanged(QString);
    void newCurrentColor(QString);
    void updateModelFrames(QImage&);



public slots:
    void nextFrameChanged(QImage&);
    void prevFrameChanged(QImage&);
    void brushSizeChanged(int);
    void eraseSelected();
    void brushSelected();
    void colorDialogSelected();
    void firstHistorySelcted();
    void secondHistorySelcted();
    void thirdHistorySelcted();
    void fourthHistorySelcted();

};

#endif // CANVAS_H
