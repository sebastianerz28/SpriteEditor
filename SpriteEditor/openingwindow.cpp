#include "openingwindow.h"
#include "ui_openingwindow.h"
#include "mainwindow.h"

OpeningWindow::OpeningWindow(Model* model,QWidget *parent) :
    QWidget(parent), w(nullptr),
    ui(new Ui::OpeningWindow)
{
    m = model;
    ui->setupUi(this);
    ui->widthBox->setMinimum(1);
    ui->widthBox->setMaximum(600);
    ui->widthBox->setValue(400);
    ui->heightBox->setMinimum(1);
    ui->heightBox->setMaximum(400);
    ui->heightBox->setValue(400);
    width = 400;
    height = 400;

    ui->startButton->setEnabled(false);
    ui->widthBox->setEnabled(false);
    ui->heightBox->setEnabled(false);

    connect(ui->createNewButton,
            &QPushButton::pressed,
            this,
            &OpeningWindow::createNewPressed);
    connect(ui->loadButton,
            &QPushButton::pressed,
            this,
            &OpeningWindow::loadExistingPressed);
    connect(ui->startButton,
            &QPushButton::pressed,
            this,
            &OpeningWindow::startPressed);
    connect(ui->widthBox,
            &QSpinBox::valueChanged,
            this,
            &OpeningWindow::widthBoxChanged);
    connect(ui->heightBox,
            &QSpinBox::valueChanged,
            this,
            &OpeningWindow::heightBoxChanged);
}

OpeningWindow::~OpeningWindow()
{
    delete ui;
    delete w;
}

void OpeningWindow::loadExistingPressed(){
    QString fileName = QFileDialog::getOpenFileName(this, "open a file");
    ui->createNewButton->setEnabled(false);
}

void OpeningWindow::startPressed(){
    m = new Model(width, height);
    w = new MainWindow(*m);
    w->show();
    this->hide();
}

void OpeningWindow::widthBoxChanged(int inputWidth){
    width = inputWidth;
}

void OpeningWindow::heightBoxChanged(int inputHeight){
    height = inputHeight;
}

void OpeningWindow::createNewPressed(){
    ui->widthBox->setEnabled(true);
    ui->heightBox->setEnabled(true);
    ui->loadButton->setEnabled(false);
    ui->startButton->setEnabled(true);
}
