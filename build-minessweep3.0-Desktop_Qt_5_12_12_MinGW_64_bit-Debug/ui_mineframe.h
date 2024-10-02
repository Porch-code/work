/********************************************************************************
** Form generated from reading UI file 'mineframe.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MINEFRAME_H
#define UI_MINEFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_MineFrame
{
public:
    QLabel *label;

    void setupUi(QFrame *MineFrame)
    {
        if (MineFrame->objectName().isEmpty())
            MineFrame->setObjectName(QString::fromUtf8("MineFrame"));
        MineFrame->resize(30, 30);
        MineFrame->setFrameShape(QFrame::Panel);
        MineFrame->setFrameShadow(QFrame::Raised);
        MineFrame->setLineWidth(3);
        label = new QLabel(MineFrame);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 30, 30));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(30, 30));
        QFont font;
        font.setFamily(QString::fromUtf8("\347\255\211\347\272\277"));
        font.setPointSize(18);
        label->setFont(font);
        label->setFrameShadow(QFrame::Plain);
        label->setLineWidth(1);
        label->setScaledContents(true);
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(false);
        label->setIndent(-1);

        retranslateUi(MineFrame);

        QMetaObject::connectSlotsByName(MineFrame);
    } // setupUi

    void retranslateUi(QFrame *MineFrame)
    {
        MineFrame->setWindowTitle(QApplication::translate("MineFrame", "Frame", nullptr));
#ifndef QT_NO_TOOLTIP
        label->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MineFrame: public Ui_MineFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MINEFRAME_H
