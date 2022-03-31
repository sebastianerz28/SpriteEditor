#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "model.h"
#include "canvas.h"
#include <QLabel>
#include "graphicsscene.h"
#include <QGraphicsView>
#include <QGridLayout>

MainWindow::MainWindow(Model& model,QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    Canvas *c = new Canvas(model.frames.at(0), ui->canvasFrame);
    c->resize(ui->canvasFrame->width(), ui->canvasFrame->height());

    // Initializing slider
    ui->sizeSlider->setMaximum(40);
    ui->sizeSlider->setMinimum(1);
    ui->sizeSlider->setValue(5);

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

    // connect animation frame increment
    connect(&model,
            &Model::sendNextAnimationFrame,
            &model,
            &Model::incrementAnimation);
    connect(&model,
            &Model::sendNextAnimationFrame,
            this,
            &MainWindow::drawAnimation);
}

void MainWindow::drawAnimation(QImage &img){
    ui->animationLabel->setPixmap(QPixmap::fromImage(img));
}

MainWindow::~MainWindow(){
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent *) {
 // Create a painter
 QPainter painter(this);
 QPen pen(Qt::black);
 painter.setPen(pen);

}
