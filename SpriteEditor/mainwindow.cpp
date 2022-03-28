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
    ui->setupUi(this);
    ui->mainCanvas->setPixmap(QPixmap::fromImage(*img));
}

MainWindow::~MainWindow()
{
    delete ui;
}
