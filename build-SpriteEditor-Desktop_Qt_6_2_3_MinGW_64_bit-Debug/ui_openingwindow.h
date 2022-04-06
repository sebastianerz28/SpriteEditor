/********************************************************************************
** Form generated from reading UI file 'openingwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
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

    void setupUi(QWidget *OpeningWindow)
    {
        if (OpeningWindow->objectName().isEmpty())
            OpeningWindow->setObjectName(QString::fromUtf8("OpeningWindow"));
        OpeningWindow->resize(400, 300);
        loadButton = new QPushButton(OpeningWindow);
        loadButton->setObjectName(QString::fromUtf8("loadButton"));
        loadButton->setGeometry(QRect(50, 70, 141, 51));
        createNewButton = new QPushButton(OpeningWindow);
        createNewButton->setObjectName(QString::fromUtf8("createNewButton"));
        createNewButton->setGeometry(QRect(50, 140, 141, 51));
        widthBox = new QSpinBox(OpeningWindow);
        widthBox->setObjectName(QString::fromUtf8("widthBox"));
        widthBox->setGeometry(QRect(220, 110, 61, 31));
        heightBox = new QSpinBox(OpeningWindow);
        heightBox->setObjectName(QString::fromUtf8("heightBox"));
        heightBox->setGeometry(QRect(220, 160, 61, 31));
        height = new QLabel(OpeningWindow);
        height->setObjectName(QString::fromUtf8("height"));
        height->setGeometry(QRect(300, 170, 58, 16));
        width = new QLabel(OpeningWindow);
        width->setObjectName(QString::fromUtf8("width"));
        width->setGeometry(QRect(300, 120, 58, 16));
        startButton = new QPushButton(OpeningWindow);
        startButton->setObjectName(QString::fromUtf8("startButton"));
        startButton->setGeometry(QRect(160, 230, 81, 41));

        retranslateUi(OpeningWindow);

        QMetaObject::connectSlotsByName(OpeningWindow);
    } // setupUi

    void retranslateUi(QWidget *OpeningWindow)
    {
        OpeningWindow->setWindowTitle(QCoreApplication::translate("OpeningWindow", "C@ DAWGS Sprite Editor", nullptr));
        loadButton->setText(QCoreApplication::translate("OpeningWindow", "Load from existing", nullptr));
        createNewButton->setText(QCoreApplication::translate("OpeningWindow", "Create new", nullptr));
        height->setText(QCoreApplication::translate("OpeningWindow", "Height", nullptr));
        width->setText(QCoreApplication::translate("OpeningWindow", "Width", nullptr));
        startButton->setText(QCoreApplication::translate("OpeningWindow", "Start", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OpeningWindow: public Ui_OpeningWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENINGWINDOW_H
