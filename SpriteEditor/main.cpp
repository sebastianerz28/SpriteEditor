#include "mainwindow.h"

#include <QApplication>
#include "canvas.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv); // init

    MainWindow w;
    w.show();
    return a.exec();
}
