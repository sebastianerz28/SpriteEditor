#ifndef CANVAS_H
#define CANVAS_H

#include <QWidget>
#include <QImage>

class Canvas : public QWidget
{
    Q_OBJECT
public:
    Canvas(QWidget *parent = nullptr, QImage *I = nullptr );

protected:
    void paintEvent(QPaintEvent *event)
    Q_DECL_OVERRIDE;
    QImage *I;

signals:

};

#endif // CANVAS_H
