#ifndef CANVAS_H
#define CANVAS_H

#include <QWidget>
#include <QImage>

class Canvas : public QWidget
{
    Q_OBJECT
public:
    explicit Canvas(QWidget *parent = nullptr, QImage *I = nullptr);

protected:
    void paintEvent(QPaintEvent *event);
    QImage I;

signals:

};

#endif // CANVAS_H
