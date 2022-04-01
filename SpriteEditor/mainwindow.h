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
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    Canvas *canvas;
    bool animationButtonPlay = true;

signals:
    void emitPlayValue(bool play);


private slots:
    void drawAnimation(QImage&);
    void playPauseAnimation();
};
#endif
