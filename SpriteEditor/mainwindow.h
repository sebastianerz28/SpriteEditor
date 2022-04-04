#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "model.h"
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE
/**
 * @brief The MainWindow class
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(Model& model,QWidget *parent = nullptr);
    ~MainWindow();


private:
    bool canvasAnimationButtonPlay = true;
    bool animationButtonPlay = true;
    Ui::MainWindow *ui;
    Canvas *canvas;
    void paintEvent(QPaintEvent *);
    void calculateAspectRatioFit(int srcWidth, int srcHeight, int maxWidth, int maxHeight, int& scaledWidth, int& scaledHeight);

signals:
    void sendPlayValue(bool);
    void sendCanvasPlayValue(bool);
    void sendSaved(QString);


public slots:
    void drawAnimation(QImage&);
    void playPauseAnimation();
    void playPauseCanvasAnimation();
    void setTextCurrentFrameLabel(int, int);
    void showSaveWindow(bool);
};
#endif
