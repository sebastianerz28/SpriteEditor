/********************************************************************************
** Form generated from reading UI file 'openingwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPENINGWINDOW_H
#define UI_OPENINGWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OpeningWindow
{
public:
    QPushButton *loadButton;
    QPushButton *createNewButton;
    QSpinBox *widthBox;
    QSpinBox *heightBox;
    QLabel *height;
    QLabel *width;
    QPushButton *startButton;
    QLabel *mainText;

    void setupUi(QWidget *OpeningWindow)
    {
        if (OpeningWindow->objectName().isEmpty())
            OpeningWindow->setObjectName(QString::fromUtf8("OpeningWindow"));
        OpeningWindow->resize(400, 300);
        loadButton = new QPushButton(OpeningWindow);
        loadButton->setObjectName(QString::fromUtf8("loadButton"));
        loadButton->setGeometry(QRect(20, 60, 141, 51));
        createNewButton = new QPushButton(OpeningWindow);
        createNewButton->setObjectName(QString::fromUtf8("createNewButton"));
        createNewButton->setGeometry(QRect(20, 130, 141, 51));
        widthBox = new QSpinBox(OpeningWindow);
        widthBox->setObjectName(QString::fromUtf8("widthBox"));
        widthBox->setGeometry(QRect(190, 140, 61, 31));
        heightBox = new QSpinBox(OpeningWindow);
        heightBox->setObjectName(QString::fromUtf8("heightBox"));
        heightBox->setGeometry(QRect(190, 190, 61, 31));
        height = new QLabel(OpeningWindow);
        height->setObjectName(QString::fromUtf8("height"));
        height->setGeometry(QRect(270, 200, 58, 16));
        width = new QLabel(OpeningWindow);
        width->setObjectName(QString::fromUtf8("width"));
        width->setGeometry(QRect(270, 150, 58, 16));
        startButton = new QPushButton(OpeningWindow);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setGeometry(QRect(160, 240, 81, 41));
        mainText = new QLabel(OpeningWindow);
        mainText->setObjectName(QString::fromUtf8("mainText"));
        mainText->setGeometry(QRect(120, 20, 161, 41));

        retranslateUi(OpeningWindow);

        QMetaObject::connectSlotsByName(OpeningWindow);
    } // setupUi

    void retranslateUi(QWidget *OpeningWindow)
    {
        OpeningWindow->setWindowTitle(QCoreApplication::translate("OpeningWindow", "Form", nullptr));
        loadButton->setText(QCoreApplication::translate("OpeningWindow", "Load from existing", nullptr));
        createNewButton->setText(QCoreApplication::translate("OpeningWindow", "Create new", nullptr));
        height->setText(QCoreApplication::translate("OpeningWindow", "Height", nullptr));
        width->setText(QCoreApplication::translate("OpeningWindow", "Width", nullptr));
        startButton->setText(QCoreApplication::translate("OpeningWindow", "Start", nullptr));
        mainText->setText(QCoreApplication::translate("OpeningWindow", "C@ DAWGS PIXEL EDITOR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OpeningWindow: public Ui_OpeningWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENINGWINDOW_H
