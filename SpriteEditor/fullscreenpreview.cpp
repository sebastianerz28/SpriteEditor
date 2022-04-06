#include "fullscreenpreview.h"
#include "ui_fullscreenpreview.h"

FullscreenPreview::FullscreenPreview(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FullscreenPreview)
{

    //ui->frameLabel->move((ui->frameLabel->width()/2) -(400/2), (ui->frameLabel->height()/2) - (400/2));

    ui->setupUi(this);
}

FullscreenPreview::~FullscreenPreview()
{
    delete ui;
}


void FullscreenPreview::receiveFrame(QImage& image){
    if(animationRunning){
        ui->frameLabel->setAlignment (Qt::AlignCenter);
        ui->frameLabel->setPixmap(QPixmap::fromImage(image));
        emit updatedImage();
    }
}

void FullscreenPreview::reject(){
    this->hide();
    animationRunning = false;

    emit enableMainWindow(animationRunning);
}
