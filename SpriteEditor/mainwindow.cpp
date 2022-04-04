#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "model.h"
#include "canvas.h"
#include <QLabel>
#include "graphicsscene.h"
#include <QGraphicsView>
#include <QGridLayout>
#include <cmath>
#include <string>
#include <QFileDialog>


using std::fmin;
using std::string;

MainWindow::MainWindow(Model&model, QWidget *parent)
    : QMainWindow(parent),
      ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    Canvas *c = new Canvas(model.frames.at(0), ui->canvasLabel);

    c->move((ui->canvasLabel->width()/2) -(model.canvasWidth/2), (ui->canvasLabel->height()/2) - (model.canvasHeight/2));

    c->resize(model.canvasWidth, model.canvasHeight);

//    ui->animationLabel->setScaledContents(true);


    // Initializing slider
    ui->sizeSlider->setMaximum(40);
    ui->sizeSlider->setMinimum(1);
    ui->sizeSlider->setValue(5);


    ui->frameRateBox->setMinimum(1);
    ui->frameRateBox->setMaximum(30);
    ui->frameRateBox->setValue(5);
    model.frameRate = 200;

    ui->playPauseAnimationButton->setText("Play");

    c->brushSize = 5; // setting initial brush size to match the slider initial value (kinda janky)
    c->brushColor = Qt::black; // initializing brush color
    ui->colorPrevWidget->setStyleSheet("background-color: black;");

    // brush slots
    connect(ui->sizeSlider,
            &QSlider::valueChanged,
            c,
            &Canvas::brushSizeChanged);
    connect(ui->eraseButton,
            &QPushButton::clicked,
            c,
            &Canvas::eraseSelected);
    connect(ui->brushButton,
            &QPushButton::clicked,
            c,
            &Canvas::brushSelected);
    connect(ui->colorPickButton,
            &QPushButton::clicked,
            c,
            &Canvas::colorDialogSelected);
    connect(c,
            &Canvas::firstHistoryChanged,
            ui->colorHist1,
            &QPushButton::setStyleSheet);
    connect(c,
            &Canvas::secondHistoryChanged,
            ui->colorHist2,
            &QPushButton::setStyleSheet);
    connect(c,
            &Canvas::thirdHistoryChanged,
            ui->colorHist3,
            &QPushButton::setStyleSheet);
    connect(c,
            &Canvas::fourthHistoryChanged,
            ui->colorHist4,
            &QPushButton::setStyleSheet);

    connect(c,
            &Canvas::newCurrentColor,
            ui->colorPrevWidget,
            &QWidget::setStyleSheet);

    //connecting color recents
    connect(ui->colorHist1,
            &QPushButton::clicked,
            c,
            &Canvas::firstHistorySelcted);
    connect(ui->colorHist2,
            &QPushButton::clicked,
            c,
            &Canvas::secondHistorySelcted);
    connect(ui->colorHist3,
            &QPushButton::clicked,
            c,
            &Canvas::thirdHistorySelcted);
    connect(ui->colorHist4,
            &QPushButton::clicked,
            c,
            &Canvas::fourthHistorySelcted);

    //connect add frame signal
    connect(ui->plusButton,
            &QPushButton::clicked,
            &model,
            &Model::addFrame);

    connect(ui->nextFrameButton,
            &QPushButton::clicked,
            &model,
            &Model::nextFrame);
    connect(&model,
            &Model::sendNextFrame,
            c,
            &Canvas::nextFrameChanged);

    connect(ui->previousFrameButton,
            &QPushButton::clicked,
            &model,
            &Model::prevFrame);
    connect(&model,
            &Model::sendPreviousFrame,
            c,
            &Canvas::prevFrameChanged);
    connect(c,
            &Canvas::updateModelFrames,
            &model,
            &Model::receiveUpdatedCanvasFrame);
    connect(ui->deleteFrameButton,
            &QPushButton::clicked,
            &model,
            &Model::deleteFrame);

    connect(&model,
            &Model::sendNextAnimationFrame,
            &model,
            &Model::incrementAnimation);

    connect(&model,
            &Model::sendNextAnimationFrame,
            this,
            &MainWindow::drawAnimation);

    // connect the play/pause button to preview animation
    connect(this,
            &MainWindow::sendPlayValue,
            &model,
            &Model::setPlayPauseBool);

    connect(ui->playPauseAnimationButton,
            &QPushButton::clicked,
            this,
            &MainWindow::playPauseAnimation);

    connect(ui->frameRateBox,
            &QSpinBox::valueChanged,
            &model,
            &Model::frameRateChanged);
    connect(&model,
            &Model::pauseAnimation,
            &model,
            &Model::deleteFrameRunning);
    connect(&model,
            &Model::enableDelete,
            ui->deleteFrameButton,
            &QPushButton::setEnabled);
    connect(&model,
            &Model::startAnimation,
            &model,
            &Model::startAnimationAfterDelete);

    // connect play canvas animation

    connect(this,
            &MainWindow::sendCanvasPlayValue,
            &model,
            &Model::setCanvasPlayPause);

    connect(&model,
            &Model::sendNextCanvasAnimationFrame,
            &model,
            &Model::incrementCanvasAnimation);

    connect(ui->playFullscreenButton,
            &QPushButton::clicked,
            this,
            &MainWindow::playPauseCanvasAnimation);

    connect(&model,
            &Model::sendNextCanvasAnimationFrame,
            c,
            &Canvas::nextFrameChanged);
    connect(&model,
            &Model::canDraw,
            c,
            &Canvas::recieveCanDraw);

    //Conect Total frame count
    connect(&model,
            &Model::updateCurrentFrameLabel,
            this,
            &MainWindow::setTextCurrentFrameLabel);

    //CopyFrame
    connect(ui->copyFrameButton,
            &QPushButton::clicked,
            &model,
            &Model::copyFrame);

    //toolbar
    connect(ui->actionsave,
            &QAction::isChecked,
            this,
            &MainWindow::showSaveWindow);
}
/**
 * @brief MainWindow::drawAnimation
 * @param img
 */
void MainWindow::drawAnimation(QImage &img){
    QPixmap p(QPixmap::fromImage(img));
    int scaledWidth = 0;
    int scaledHeight = 0;
    int maxWidth(ui->animationLabel->width());
    int maxHeight(ui->animationLabel->height());
    int srcWidth(img.width());
    int srcHeight(img.height());


    calculateAspectRatioFit(srcWidth, srcHeight, maxWidth, maxHeight, scaledWidth, scaledHeight);


    ui->animationLabel->setPixmap(p.scaled(scaledWidth, scaledHeight, Qt::KeepAspectRatio));


}

MainWindow::~MainWindow(){
    delete ui;
}

/**
 * @brief MainWindow::paintEvent
 */
void MainWindow::paintEvent(QPaintEvent *) {
    // Create a painter
    QPainter painter(this);
    QPen pen(Qt::black);
    painter.setPen(pen);
}
/**
 * @brief MainWindow::calculateAspectRatioFit
 * @param srcWidth
 * @param srcHeight
 * @param maxWidth
 * @param maxHeight
 * @param scaledWidth
 * @param scaledHeight
 */
void MainWindow::calculateAspectRatioFit(int srcWidth, int srcHeight, int maxWidth, int maxHeight, int& scaledWidth, int& scaledHeight){
    double ratio = fmin(maxWidth/(double)srcWidth, maxHeight/(double)srcHeight);

    scaledWidth = srcWidth * ratio;
    scaledHeight = srcHeight * ratio;
}

void MainWindow::playPauseCanvasAnimation(){
    if(canvasAnimationButtonPlay){
        ui->playFullscreenButton->setText("Pause");
    } else {
        ui->playFullscreenButton->setText("Play Fullscreen");
    }

    emit sendCanvasPlayValue(canvasAnimationButtonPlay);
    canvasAnimationButtonPlay = !canvasAnimationButtonPlay;
}
/**
 * @brief MainWindow::playPauseAnimation
 */
void MainWindow::playPauseAnimation()
{
    if(animationButtonPlay){
        ui->playPauseAnimationButton->setText("Pause");
    } else {
        ui->playPauseAnimationButton->setText("Play Preview");
    }

    emit sendPlayValue(animationButtonPlay);
    animationButtonPlay = !animationButtonPlay;
}
/**
 * @brief MainWindow::setTextCurrentFrameLabel
 * @param curr
 * @param total
 */
void MainWindow::setTextCurrentFrameLabel(int curr, int total){
    QString s = QString::number(curr+1) + "/" + QString::number(total);
    ui->currentFrameLabel->setText(s);
}

void MainWindow::showSaveWindow(bool isClicked){
    if(isClicked){
     QString fileName = QFileDialog::getOpenFileName(this, "open a file");
    }
}
