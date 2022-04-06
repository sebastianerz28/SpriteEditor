#ifndef FULLSCREENPREVIEW_H
#define FULLSCREENPREVIEW_H

#include <QDialog>

namespace Ui {
class FullscreenPreview;
}

class FullscreenPreview : public QDialog
{
    Q_OBJECT

public:
    explicit FullscreenPreview(QWidget *parent = nullptr);
    ~FullscreenPreview();
    bool animationRunning = false;
public slots:
    void receiveFrame(QImage&);
    void reject();


signals:
    void updatedImage();
    void enableMainWindow(bool);


private:

    Ui::FullscreenPreview *ui;
};

#endif // FULLSCREENPREVIEW_H
