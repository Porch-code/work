/********************************************************************************
** Form generated from reading UI file 'playframe.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAYFRAME_H
#define UI_PLAYFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>

QT_BEGIN_NAMESPACE

class Ui_playFrame
{
public:
    QGridLayout *gridLayout;

    void setupUi(QFrame *playFrame)
    {
        if (playFrame->objectName().isEmpty())
            playFrame->setObjectName(QString::fromUtf8("playFrame"));
        playFrame->resize(273, 273);
        playFrame->setStyleSheet(QString::fromUtf8("QLabel:{text-align:center;text-decoration:underline;}"));
        playFrame->setFrameShadow(QFrame::Sunken);
        playFrame->setLineWidth(3);
        gridLayout = new QGridLayout(playFrame);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));

        retranslateUi(playFrame);

        QMetaObject::connectSlotsByName(playFrame);
    } // setupUi

    void retranslateUi(QFrame *playFrame)
    {
        playFrame->setWindowTitle(QApplication::translate("playFrame", "Frame", nullptr));
    } // retranslateUi

};

namespace Ui {
    class playFrame: public Ui_playFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYFRAME_H
