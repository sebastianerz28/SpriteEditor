#include "mainwindow.h"
#include <QApplication>
#include "canvas.h"
#include "openingwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv); // init
    Model *m = nullptr;
    OpeningWindow o(m);
    o.show();
    //MainWindow w(m);
    //w.show();
    return a.exec();
}
