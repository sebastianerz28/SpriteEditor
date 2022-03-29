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
//    QGraphicsView * view = new QGraphicsView(this) ;
//    ui->setupUi(this);



//    GraphicsScene *scene = new GraphicsScene(this);
//    view->setScene(scene);



    QImage *img = &model.panel;
    ui->setupUi(this);

    Canvas *c = new Canvas(ui->canvasFrame);
    c->resize(ui->canvasFrame->width(), ui->canvasFrame->height());

//    QGridLayout * gridLayout = new QGridLayout(this);
//    gridLayout->addWidget(c);
//    this->setLayout(gridLayout);
    c->setStyleSheet("background-color: black; border:1px solid black");
//    c->show();

//    ui->mainCanvas->setPixmap(QPixmap::fromImage(*img));



//    // button connections
//    connect(ui->mainCanvas, SIGNAL(valueChanged(int)),
//    this, SLOT(valuesChanged()));


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent *) {
 // Create a painter
 QPainter painter(this);
 QPen pen(Qt::black);
 painter.setPen(pen);

}
