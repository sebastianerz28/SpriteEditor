#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "model.h"
#include "canvas.h"
#include <QLabel>
MainWindow::MainWindow(Model& model,QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    QImage *img = &model.panel;
    canvas = new Canvas(this, img);

    this->setCentralWidget(canvas);
    canvas->show();
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
