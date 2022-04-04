#ifndef OPENINGWINDOW_H
#define OPENINGWINDOW_H
#include "mainwindow.h"
#include <QWidget>
#include <QFileDialog>

namespace Ui {
class OpeningWindow;
}
/**
 * @brief The OpeningWindow class
 */
class OpeningWindow : public QWidget
{
    Q_OBJECT

public:
    explicit OpeningWindow(Model* model,QWidget *parent = nullptr);
    ~OpeningWindow();
    MainWindow* w;
    Model* m;
public slots:
    void loadExistingPressed();
    void createNewPressed();
    void widthBoxChanged(int);
    void heightBoxChanged(int);
    void startPressed();

private:
    Ui::OpeningWindow *ui;
    int width;
    int height;
};

#endif // OPENINGWINDOW_H
