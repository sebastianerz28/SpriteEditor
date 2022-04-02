#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "model.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(Model& model,QWidget *parent = nullptr);
    ~MainWindow();
    bool animationButtonPlay = true;
//    Model model;


private:
    Ui::MainWindow *ui;
    Canvas *canvas;
    void paintEvent(QPaintEvent *);

signals:
    void emitPlayValue(bool play);

public slots:
    void drawAnimation(QImage&);
    void playPauseAnimation();
};
#endif
