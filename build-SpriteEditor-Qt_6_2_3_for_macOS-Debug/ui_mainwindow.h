/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFrame *canvasFrame;
    QWidget *brushWidget;
    QPushButton *brushButton;
    QPushButton *labelButton;
    QLabel *brushLabel;
    QSlider *sizeSlider;
    QLabel *colorPrevLabel;
    QWidget *colorPrevWidget;
    QPushButton *colorPickButton;
    QLabel *colorHistLabel;
    QPushButton *colorHist_1;
    QPushButton *colorHist_2;
    QPushButton *colorHist_3;
    QPushButton *colorHist_4;
    QWidget *previewWidget;
    QLabel *previewLabel;
    QWidget *toolsWidget;
    QLabel *toolsLabel;
    QPushButton *eraseFrameButton;
    QSpinBox *frameRateBox;
    QLabel *frameRateLabel;
    QPushButton *overlayButton;
    QMenuBar *menubar;
    QMenu *menufile;
    QMenu *menuhelp;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1055, 537);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: beige"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        canvasFrame = new QFrame(centralwidget);
        canvasFrame->setObjectName(QString::fromUtf8("canvasFrame"));
        canvasFrame->setGeometry(QRect(180, 20, 621, 391));
        canvasFrame->setStyleSheet(QString::fromUtf8("background-color: white;"));
        canvasFrame->setFrameShape(QFrame::StyledPanel);
        canvasFrame->setFrameShadow(QFrame::Raised);
        brushWidget = new QWidget(centralwidget);
        brushWidget->setObjectName(QString::fromUtf8("brushWidget"));
        brushWidget->setGeometry(QRect(20, 20, 141, 391));
        brushWidget->setStyleSheet(QString::fromUtf8("#brushWidget{\n"
"border-style: solid;\n"
"border-width: 1px;\n"
"border-color: #4d3900;\n"
"padding: 6px;\n"
"background-color: #fafaeb;\n"
"}"));
        brushButton = new QPushButton(brushWidget);
        brushButton->setObjectName(QString::fromUtf8("brushButton"));
        brushButton->setGeometry(QRect(40, 10, 91, 24));
        brushButton->setStyleSheet(QString::fromUtf8("QPushButton{ color: black; }\n"
"\n"
"QPushButton:hover{\n"
" background-color: rgba(0,0,0,0.05);\n"
"color: black;\n"
"}\n"
"\n"
"QPushButton:pressed{ background-color: rgba(0,0,0,0.1); }"));
        labelButton = new QPushButton(brushWidget);
        labelButton->setObjectName(QString::fromUtf8("labelButton"));
        labelButton->setGeometry(QRect(40, 40, 91, 24));
        labelButton->setStyleSheet(QString::fromUtf8("QPushButton{ color: black; }\n"
"\n"
"QPushButton:hover{\n"
" background-color: rgba(0,0,0,0.05);\n"
"color: black;\n"
"}\n"
"\n"
"QPushButton:pressed{ background-color: rgba(0,0,0,0.1); }"));
        brushLabel = new QLabel(brushWidget);
        brushLabel->setObjectName(QString::fromUtf8("brushLabel"));
        brushLabel->setGeometry(QRect(10, 70, 91, 16));
        brushLabel->setStyleSheet(QString::fromUtf8("background-color:transparent; color: black"));
        sizeSlider = new QSlider(brushWidget);
        sizeSlider->setObjectName(QString::fromUtf8("sizeSlider"));
        sizeSlider->setGeometry(QRect(10, 90, 121, 16));
        sizeSlider->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal { \n"
"	background-color: black; \n"
"	height: 6px; \n"
"	border-style: solid;\n"
"	border-color: black;\n"
"	border-radius: 2px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal { \n"
"	background-color: gray; \n"
"	border: 1px solid white; \n"
"	width: 10px; \n"
"	height: 20px; \n"
"	line-height: 20px; \n"
"	margin-top: -5px; \n"
"	margin-bottom: -5px; \n"
"	border-radius: 5px; \n"
"}\n"
"\n"
"QSlider::handle:horizontal:hover { \n"
"	border-radius: 5px;\n"
"}"));
        sizeSlider->setOrientation(Qt::Horizontal);
        colorPrevLabel = new QLabel(brushWidget);
        colorPrevLabel->setObjectName(QString::fromUtf8("colorPrevLabel"));
        colorPrevLabel->setGeometry(QRect(10, 120, 91, 16));
        colorPrevLabel->setStyleSheet(QString::fromUtf8("background-color:transparent; color: black"));
        colorPrevWidget = new QWidget(brushWidget);
        colorPrevWidget->setObjectName(QString::fromUtf8("colorPrevWidget"));
        colorPrevWidget->setGeometry(QRect(10, 140, 121, 100));
        colorPickButton = new QPushButton(brushWidget);
        colorPickButton->setObjectName(QString::fromUtf8("colorPickButton"));
        colorPickButton->setGeometry(QRect(10, 250, 121, 24));
        colorPickButton->setStyleSheet(QString::fromUtf8("QPushButton{ color: black; }\n"
"\n"
"QPushButton:hover{\n"
" background-color: rgba(0,0,0,0.05);\n"
"color: black;\n"
"}\n"
"\n"
"QPushButton:pressed{ background-color: rgba(0,0,0,0.1); }"));
        colorHistLabel = new QLabel(brushWidget);
        colorHistLabel->setObjectName(QString::fromUtf8("colorHistLabel"));
        colorHistLabel->setGeometry(QRect(10, 280, 91, 16));
        colorHistLabel->setStyleSheet(QString::fromUtf8("background-color:transparent; color: black"));
        colorHist_1 = new QPushButton(brushWidget);
        colorHist_1->setObjectName(QString::fromUtf8("colorHist_1"));
        colorHist_1->setGeometry(QRect(10, 300, 24, 24));
        colorHist_1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-style: solid;\n"
"border-width: 1px;\n"
"border-color: black;\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed{ \n"
"background-color: orange; \n"
"}"));
        colorHist_2 = new QPushButton(brushWidget);
        colorHist_2->setObjectName(QString::fromUtf8("colorHist_2"));
        colorHist_2->setGeometry(QRect(40, 300, 24, 24));
        colorHist_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-style: solid;\n"
"border-width: 1px;\n"
"border-color: black;\n"
"}\n"
"\n"
"QPushButton:pressed{ \n"
"background-color: orange; \n"
"}"));
        colorHist_3 = new QPushButton(brushWidget);
        colorHist_3->setObjectName(QString::fromUtf8("colorHist_3"));
        colorHist_3->setGeometry(QRect(70, 300, 24, 24));
        colorHist_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-style: solid;\n"
"border-width: 1px;\n"
"border-color: black;\n"
"}\n"
"\n"
"QPushButton:pressed{ \n"
"background-color: orange; \n"
"}"));
        colorHist_4 = new QPushButton(brushWidget);
        colorHist_4->setObjectName(QString::fromUtf8("colorHist_4"));
        colorHist_4->setGeometry(QRect(100, 300, 24, 24));
        colorHist_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-style: solid;\n"
"border-width: 1px;\n"
"border-color: black;\n"
"}\n"
"\n"
"QPushButton:pressed{ \n"
"background-color: orange; \n"
"}"));
        previewWidget = new QWidget(centralwidget);
        previewWidget->setObjectName(QString::fromUtf8("previewWidget"));
        previewWidget->setGeometry(QRect(820, 20, 211, 221));
        previewWidget->setStyleSheet(QString::fromUtf8("#previewWidget{\n"
"border-style: solid;\n"
"border-width: 1px;\n"
"border-color: #4d3900;\n"
"padding: 6px;\n"
"background-color: #fafaeb;\n"
"}"));
        previewLabel = new QLabel(previewWidget);
        previewLabel->setObjectName(QString::fromUtf8("previewLabel"));
        previewLabel->setGeometry(QRect(10, 10, 61, 16));
        previewLabel->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: black;\n"
"background-color: transparent;\n"
"border-style: transparent;\n"
"padding: 0px;\n"
"}"));
        toolsWidget = new QWidget(centralwidget);
        toolsWidget->setObjectName(QString::fromUtf8("toolsWidget"));
        toolsWidget->setGeometry(QRect(820, 260, 211, 151));
        toolsWidget->setStyleSheet(QString::fromUtf8("#toolsWidget{\n"
"border-style: solid;\n"
"border-width: 1px;\n"
"border-color: #4d3900;\n"
"padding: 6px;\n"
"background-color: #fafaeb;\n"
"}"));
        toolsLabel = new QLabel(toolsWidget);
        toolsLabel->setObjectName(QString::fromUtf8("toolsLabel"));
        toolsLabel->setGeometry(QRect(10, 10, 61, 16));
        toolsLabel->setStyleSheet(QString::fromUtf8("QLabel{\n"
"color: black;\n"
"border-style: transparent;\n"
"background-color: transparent;\n"
"padding: 0px;\n"
"}"));
        eraseFrameButton = new QPushButton(toolsWidget);
        eraseFrameButton->setObjectName(QString::fromUtf8("eraseFrameButton"));
        eraseFrameButton->setGeometry(QRect(30, 70, 141, 24));
        eraseFrameButton->setStyleSheet(QString::fromUtf8("QPushButton{ color: black; }\n"
"\n"
"QPushButton:hover{\n"
" background-color: rgba(0,0,0,0.05);\n"
"color: black;\n"
"}\n"
"\n"
"QPushButton:pressed{ background-color: rgba(0,0,0,0.1); }"));
        frameRateBox = new QSpinBox(toolsWidget);
        frameRateBox->setObjectName(QString::fromUtf8("frameRateBox"));
        frameRateBox->setGeometry(QRect(130, 100, 44, 25));
        frameRateBox->setStyleSheet(QString::fromUtf8("color: black;"));
        frameRateLabel = new QLabel(toolsWidget);
        frameRateLabel->setObjectName(QString::fromUtf8("frameRateLabel"));
        frameRateLabel->setGeometry(QRect(40, 100, 91, 21));
        frameRateLabel->setStyleSheet(QString::fromUtf8("padding: 0px; color: black; border-style: none; background-color: transparent;"));
        overlayButton = new QPushButton(toolsWidget);
        overlayButton->setObjectName(QString::fromUtf8("overlayButton"));
        overlayButton->setGeometry(QRect(30, 30, 141, 31));
        overlayButton->setStyleSheet(QString::fromUtf8("QPushButton{ \n"
"color: black; \n"
"}\n"
"\n"
"QPushButton:hover{\n"
" background-color: rgba(0,0,0,0.05);\n"
"color: black;\n"
"}\n"
"\n"
"QPushButton:pressed{ background-color: rgba(0,0,0,0.1); }\n"
""));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1055, 21));
        menufile = new QMenu(menubar);
        menufile->setObjectName(QString::fromUtf8("menufile"));
        menuhelp = new QMenu(menubar);
        menuhelp->setObjectName(QString::fromUtf8("menuhelp"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menufile->menuAction());
        menubar->addAction(menuhelp->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        brushButton->setText(QCoreApplication::translate("MainWindow", "Brush", nullptr));
        labelButton->setText(QCoreApplication::translate("MainWindow", "Erase", nullptr));
        brushLabel->setText(QCoreApplication::translate("MainWindow", "Brush Size", nullptr));
        colorPrevLabel->setText(QCoreApplication::translate("MainWindow", "Color Preview", nullptr));
        colorPickButton->setText(QCoreApplication::translate("MainWindow", "Color Picker", nullptr));
        colorHistLabel->setText(QCoreApplication::translate("MainWindow", "Color History", nullptr));
        colorHist_1->setText(QString());
        colorHist_2->setText(QString());
        colorHist_3->setText(QString());
        colorHist_4->setText(QString());
        previewLabel->setText(QCoreApplication::translate("MainWindow", "Preview", nullptr));
        toolsLabel->setText(QCoreApplication::translate("MainWindow", "Tools:", nullptr));
        eraseFrameButton->setText(QCoreApplication::translate("MainWindow", "Erase Frame", nullptr));
        frameRateLabel->setText(QCoreApplication::translate("MainWindow", "Frame Rate:", nullptr));
        overlayButton->setText(QCoreApplication::translate("MainWindow", " Over Lay", nullptr));
        menufile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
        menuhelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
