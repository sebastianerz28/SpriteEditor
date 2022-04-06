/********************************************************************************
** Form generated from reading UI file 'fullscreenpreview.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FULLSCREENPREVIEW_H
#define UI_FULLSCREENPREVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_FullscreenPreview
{
public:
    QLabel *frameLabel;

    void setupUi(QDialog *FullscreenPreview)
    {
        if (FullscreenPreview->objectName().isEmpty())
            FullscreenPreview->setObjectName(QString::fromUtf8("FullscreenPreview"));
        FullscreenPreview->resize(500, 500);
        frameLabel = new QLabel(FullscreenPreview);
        frameLabel->setObjectName(QString::fromUtf8("frameLabel"));
        frameLabel->setGeometry(QRect(40, 70, 400, 400));

        retranslateUi(FullscreenPreview);

        QMetaObject::connectSlotsByName(FullscreenPreview);
    } // setupUi

    void retranslateUi(QDialog *FullscreenPreview)
    {
        FullscreenPreview->setWindowTitle(QCoreApplication::translate("FullscreenPreview", "Dialog", nullptr));
        frameLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FullscreenPreview: public Ui_FullscreenPreview {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FULLSCREENPREVIEW_H
