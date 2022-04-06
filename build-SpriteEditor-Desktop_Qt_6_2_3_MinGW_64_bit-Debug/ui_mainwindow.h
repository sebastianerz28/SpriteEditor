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
    QAction *actionsave;
    QAction *actionLoad;
    QWidget *centralwidget;
    QWidget *brushWidget;
    QPushButton *brushButton;
    QPushButton *eraseButton;
    QLabel *brushLabel;
    QSlider *sizeSlider;
    QLabel *colorPrevLabel;
    QWidget *colorPrevWidget;
    QPushButton *colorPickButton;
    QLabel *colorHistLabel;
    QPushButton *colorHist1;
    QPushButton *colorHist2;
    QPushButton *colorHist3;
    QPushButton *colorHist4;
    QWidget *previewWidget;
    QLabel *previewLabel;
    QLabel *animationLabel;
    QWidget *toolsWidget;
    QLabel *toolsLabel;
    QPushButton *deleteFrameButton;
    QSpinBox *frameRateBox;
    QLabel *frameRateLabel;
    QPushButton *copyFrameButton;
    QPushButton *plusButton;
    QPushButton *nextFrameButton;
    QPushButton *previousFrameButton;
    QPushButton *playPauseAnimationButton;
    QLabel *canvasLabel;
    QPushButton *playFullscreenButton;
    QLabel *currentFrameLabel;
    QLabel *label;
    QMenuBar *menubar;
    QMenu *menufile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1054, 525);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: #DFDFDF"));
        actionsave = new QAction(MainWindow);
        actionsave->setObjectName(QString::fromUtf8("actionsave"));
        actionLoad = new QAction(MainWindow);
        actionLoad->setObjectName(QString::fromUtf8("actionLoad"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        brushWidget = new QWidget(centralwidget);
        brushWidget->setObjectName(QString::fromUtf8("brushWidget"));
        brushWidget->setGeometry(QRect(20, 20, 141, 341));
        brushWidget->setStyleSheet(QString::fromUtf8("#brushWidget{\n"
"border-style: solid;\n"
"border-width: 1px;\n"
"border-color: #4d3900;\n"
"padding: 6px;\n"
"background-color: #DFDFDF;\n"
"}"));
        brushButton = new QPushButton(brushWidget);
        brushButton->setObjectName(QString::fromUtf8("brushButton"));
        brushButton->setGeometry(QRect(10, 10, 121, 24));
        brushButton->setStyleSheet(QString::fromUtf8("QPushButton{ color: black;border: 1px solid black; }\n"
"\n"
"QPushButton:hover{\n"
" background-color: rgba(0,0,0,0.05);\n"
"color: black;\n"
"}\n"
"\n"
"QPushButton:pressed{ background-color: rgba(0,0,0,0.1); }"));
        eraseButton = new QPushButton(brushWidget);
        eraseButton->setObjectName(QString::fromUtf8("eraseButton"));
        eraseButton->setGeometry(QRect(10, 40, 121, 24));
        eraseButton->setStyleSheet(QString::fromUtf8("QPushButton{ color: black; }\n"
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
        colorHist1 = new QPushButton(brushWidget);
        colorHist1->setObjectName(QString::fromUtf8("colorHist1"));
        colorHist1->setGeometry(QRect(10, 300, 24, 24));
        colorHist1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-style: solid;\n"
"border-width: 1px;\n"
"border-color: black;\n"
"\n"
"}\n"
"\n"
"QPushButton:pressed{ \n"
"background-color: orange; \n"
"}"));
        colorHist2 = new QPushButton(brushWidget);
        colorHist2->setObjectName(QString::fromUtf8("colorHist2"));
        colorHist2->setGeometry(QRect(40, 300, 24, 24));
        colorHist2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-style: solid;\n"
"border-width: 1px;\n"
"border-color: black;\n"
"}\n"
"\n"
"QPushButton:pressed{ \n"
"background-color: orange; \n"
"}"));
        colorHist3 = new QPushButton(brushWidget);
        colorHist3->setObjectName(QString::fromUtf8("colorHist3"));
        colorHist3->setGeometry(QRect(70, 300, 24, 24));
        colorHist3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"border-style: solid;\n"
"border-width: 1px;\n"
"border-color: black;\n"
"}\n"
"\n"
"QPushButton:pressed{ \n"
"background-color: orange; \n"
"}"));
        colorHist4 = new QPushButton(brushWidget);
        colorHist4->setObjectName(QString::fromUtf8("colorHist4"));
        colorHist4->setGeometry(QRect(100, 300, 24, 24));
        colorHist4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
"background-color: #DFDFDF;\n"
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
        animationLabel = new QLabel(previewWidget);
        animationLabel->setObjectName(QString::fromUtf8("animationLabel"));
        animationLabel->setGeometry(QRect(10, 30, 191, 181));
        animationLabel->setAutoFillBackground(false);
        animationLabel->setStyleSheet(QString::fromUtf8("background-color : transparent"));
        animationLabel->setAlignment(Qt::AlignCenter);
        toolsWidget = new QWidget(centralwidget);
        toolsWidget->setObjectName(QString::fromUtf8("toolsWidget"));
        toolsWidget->setGeometry(QRect(821, 320, 211, 151));
        toolsWidget->setStyleSheet(QString::fromUtf8("#toolsWidget{\n"
"border-style: solid;\n"
"border-width: 1px;\n"
"border-color: #4d3900;\n"
"padding: 6px;\n"
"background-color: #DFDFDF;\n"
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
        deleteFrameButton = new QPushButton(toolsWidget);
        deleteFrameButton->setObjectName(QString::fromUtf8("deleteFrameButton"));
        deleteFrameButton->setGeometry(QRect(30, 70, 141, 31));
        deleteFrameButton->setStyleSheet(QString::fromUtf8("QPushButton{ color: black; }\n"
"\n"
"QPushButton:hover{\n"
" background-color: rgba(0,0,0,0.05);\n"
"color: black;\n"
"}\n"
"\n"
"QPushButton:pressed{ background-color: rgba(0,0,0,0.1); }"));
        frameRateBox = new QSpinBox(toolsWidget);
        frameRateBox->setObjectName(QString::fromUtf8("frameRateBox"));
        frameRateBox->setGeometry(QRect(130, 110, 44, 25));
        frameRateBox->setStyleSheet(QString::fromUtf8("color: black;"));
        frameRateLabel = new QLabel(toolsWidget);
        frameRateLabel->setObjectName(QString::fromUtf8("frameRateLabel"));
        frameRateLabel->setGeometry(QRect(30, 110, 91, 21));
        frameRateLabel->setStyleSheet(QString::fromUtf8("padding: 0px; color: black; border-style: none; background-color: transparent;"));
        copyFrameButton = new QPushButton(toolsWidget);
        copyFrameButton->setObjectName(QString::fromUtf8("copyFrameButton"));
        copyFrameButton->setGeometry(QRect(30, 30, 141, 31));
        copyFrameButton->setStyleSheet(QString::fromUtf8("QPushButton{ \n"
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
        plusButton = new QPushButton(centralwidget);
        plusButton->setObjectName(QString::fromUtf8("plusButton"));
        plusButton->setGeometry(QRect(330, 430, 101, 41));
        QFont font;
        font.setPointSize(9);
        font.setBold(false);
        plusButton->setFont(font);
        plusButton->setStyleSheet(QString::fromUtf8("QPushButton{ color: black; }\n"
"\n"
"QPushButton:hover{\n"
" background-color: rgba(0,0,0,0.05);\n"
"color: black;\n"
"}\n"
"\n"
"QPushButton:pressed{ background-color: rgba(0,0,0,0.1); }"));
        nextFrameButton = new QPushButton(centralwidget);
        nextFrameButton->setObjectName(QString::fromUtf8("nextFrameButton"));
        nextFrameButton->setGeometry(QRect(570, 430, 101, 41));
        nextFrameButton->setStyleSheet(QString::fromUtf8("QPushButton{ color: black; }\n"
"\n"
"QPushButton:hover{\n"
" background-color: rgba(0,0,0,0.05);\n"
"color: black;\n"
"}\n"
"\n"
"QPushButton:pressed{ background-color: rgba(0,0,0,0.1); }"));
        previousFrameButton = new QPushButton(centralwidget);
        previousFrameButton->setObjectName(QString::fromUtf8("previousFrameButton"));
        previousFrameButton->setGeometry(QRect(450, 430, 101, 41));
        previousFrameButton->setStyleSheet(QString::fromUtf8("QPushButton{ color: black; }\n"
"\n"
"QPushButton:hover{\n"
" background-color: rgba(0,0,0,0.05);\n"
"color: black;\n"
"}\n"
"\n"
"QPushButton:pressed{ background-color: rgba(0,0,0,0.1); }"));
        playPauseAnimationButton = new QPushButton(centralwidget);
        playPauseAnimationButton->setObjectName(QString::fromUtf8("playPauseAnimationButton"));
        playPauseAnimationButton->setGeometry(QRect(820, 260, 101, 41));
        playPauseAnimationButton->setStyleSheet(QString::fromUtf8("QPushButton{ color: black; }\n"
"\n"
"QPushButton:hover{\n"
" background-color: rgba(0,0,0,0.05);\n"
"color: black;\n"
"}\n"
"\n"
"QPushButton:pressed{ background-color: rgba(0,0,0,0.1); }"));
        canvasLabel = new QLabel(centralwidget);
        canvasLabel->setObjectName(QString::fromUtf8("canvasLabel"));
        canvasLabel->setGeometry(QRect(290, 20, 400, 400));
        playFullscreenButton = new QPushButton(centralwidget);
        playFullscreenButton->setObjectName(QString::fromUtf8("playFullscreenButton"));
        playFullscreenButton->setGeometry(QRect(210, 430, 101, 41));
        playFullscreenButton->setStyleSheet(QString::fromUtf8("QPushButton{ color: black; }\n"
"\n"
"QPushButton:hover{\n"
" background-color: rgba(0,0,0,0.05);\n"
"color: black;\n"
"}\n"
"\n"
"QPushButton:pressed{ background-color: rgba(0,0,0,0.1); }"));
        currentFrameLabel = new QLabel(centralwidget);
        currentFrameLabel->setObjectName(QString::fromUtf8("currentFrameLabel"));
        currentFrameLabel->setGeometry(QRect(690, 450, 51, 21));
        QFont font1;
        font1.setPointSize(12);
        currentFrameLabel->setFont(font1);
        currentFrameLabel->setStyleSheet(QString::fromUtf8("color: black;\n"
"\n"
"background-color: transparent;"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(690, 430, 91, 20));
        label->setStyleSheet(QString::fromUtf8("color: black;\n"
"\n"
"background-color: transparent;\n"
"\n"
"margin: 0;\n"
"padding: 0;"));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1054, 21));
        menufile = new QMenu(menubar);
        menufile->setObjectName(QString::fromUtf8("menufile"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menufile->menuAction());
        menufile->addAction(actionsave);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "C@ DAWGS Sprite Editor", nullptr));
        actionsave->setText(QCoreApplication::translate("MainWindow", "Save", nullptr));
        actionLoad->setText(QCoreApplication::translate("MainWindow", "Load", nullptr));
        brushButton->setText(QCoreApplication::translate("MainWindow", "Brush", nullptr));
        eraseButton->setText(QCoreApplication::translate("MainWindow", "Erase", nullptr));
        brushLabel->setText(QCoreApplication::translate("MainWindow", "Brush Size", nullptr));
        colorPrevLabel->setText(QCoreApplication::translate("MainWindow", "Color Preview", nullptr));
        colorPickButton->setText(QCoreApplication::translate("MainWindow", "Color Picker", nullptr));
        colorHistLabel->setText(QCoreApplication::translate("MainWindow", "Color History", nullptr));
        colorHist1->setText(QString());
        colorHist2->setText(QString());
        colorHist3->setText(QString());
        colorHist4->setText(QString());
        previewLabel->setText(QCoreApplication::translate("MainWindow", "Preview", nullptr));
        animationLabel->setText(QString());
        toolsLabel->setText(QCoreApplication::translate("MainWindow", "Tools:", nullptr));
        deleteFrameButton->setText(QCoreApplication::translate("MainWindow", "Delete Frame", nullptr));
        frameRateLabel->setText(QCoreApplication::translate("MainWindow", "Frame Rate:", nullptr));
        copyFrameButton->setText(QCoreApplication::translate("MainWindow", "Copy Frame", nullptr));
        plusButton->setText(QCoreApplication::translate("MainWindow", "Add Frame", nullptr));
        nextFrameButton->setText(QCoreApplication::translate("MainWindow", "Next Frame", nullptr));
        previousFrameButton->setText(QCoreApplication::translate("MainWindow", "Previous Frame", nullptr));
        playPauseAnimationButton->setText(QCoreApplication::translate("MainWindow", "Play Preview", nullptr));
        canvasLabel->setText(QString());
        playFullscreenButton->setText(QCoreApplication::translate("MainWindow", "Play Fullscreen", nullptr));
        currentFrameLabel->setText(QCoreApplication::translate("MainWindow", "1/1", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Current Frame", nullptr));
        menufile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
