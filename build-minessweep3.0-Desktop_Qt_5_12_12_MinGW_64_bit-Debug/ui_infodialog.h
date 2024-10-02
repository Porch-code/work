/********************************************************************************
** Form generated from reading UI file 'infodialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFODIALOG_H
#define UI_INFODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_infoDialog
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QTextBrowser *textBrowser;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QTextBrowser *textBrowser_3;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QTextBrowser *textBrowser_2;
    QLabel *label_7;
    QLabel *label_9;
    QLabel *label_8;
    QLabel *label_4;

    void setupUi(QDialog *infoDialog)
    {
        if (infoDialog->objectName().isEmpty())
            infoDialog->setObjectName(QString::fromUtf8("infoDialog"));
        infoDialog->resize(437, 456);
        gridLayout = new QGridLayout(infoDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(infoDialog);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        textBrowser = new QTextBrowser(infoDialog);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        horizontalLayout->addWidget(textBrowser);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 2);

        label_5 = new QLabel(infoDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 0, 2, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(infoDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        textBrowser_3 = new QTextBrowser(infoDialog);
        textBrowser_3->setObjectName(QString::fromUtf8("textBrowser_3"));

        horizontalLayout_2->addWidget(textBrowser_3);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 2);

        label_6 = new QLabel(infoDialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 1, 2, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(infoDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        textBrowser_2 = new QTextBrowser(infoDialog);
        textBrowser_2->setObjectName(QString::fromUtf8("textBrowser_2"));

        horizontalLayout_3->addWidget(textBrowser_2);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 2);

        label_7 = new QLabel(infoDialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 2, 2, 1, 1);

        label_9 = new QLabel(infoDialog);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 3, 0, 2, 2);

        label_8 = new QLabel(infoDialog);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 4, 1, 1, 1);

        label_4 = new QLabel(infoDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 5, 0, 1, 2);


        retranslateUi(infoDialog);

        QMetaObject::connectSlotsByName(infoDialog);
    } // setupUi

    void retranslateUi(QDialog *infoDialog)
    {
        infoDialog->setWindowTitle(QApplication::translate("infoDialog", "Dialog", nullptr));
        label->setText(QApplication::translate("infoDialog", "\345\267\246\351\224\256\345\215\225\345\207\273", nullptr));
        textBrowser->setHtml(QApplication::translate("infoDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'arial','\345\256\213\344\275\223','sans-serif'; font-size:14px; color:#333333; background-color:#ffffff;\">\345\234\250\345\210\244\346\226\255\345\207\272\344\270\215\346\230\257\351\233\267\347\232\204\346\226\271\345\235\227\344\270\212\346\214\211\344\270\213\345\267\246\351\224\256\357\274\214\345\217\257\344\273\245\346\211\223\345\274\200\350\257\245\346\226\271\345\235\227\343\200\202\345\246\202\346\236\234\346\226\271\345\235\227\344\270\212\345\207\272\347\216\260\346\225\260\345\255\227\357\274\214\345\210\231\350\257\245\346"
                        "\225\260\345\255\227\350\241\250\347\244\272\345\205\266\345\221\250\345\233\2643\303\2273\345\214\272\345\237\237\344\270\255\347\232\204\345\234\260\351\233\267\346\225\260\357\274\210\344\270\200\350\210\254\344\270\2728\344\270\252\346\240\274\345\255\220\357\274\214\345\257\271\344\272\216\350\276\271\345\235\227\344\270\2725\344\270\252\346\240\274\345\255\220\357\274\214\345\257\271\344\272\216\350\247\222\345\235\227\344\270\2723\344\270\252\346\240\274\345\255\220\343\200\202\346\211\200\344\273\245\346\211\253\351\233\267\344\270\255\346\234\200\345\244\247\347\232\204\346\225\260\345\255\227\344\270\2728\357\274\211\357\274\233\345\246\202\346\236\234\346\226\271\345\235\227\344\270\212\344\270\272\347\251\272\357\274\210\347\233\270\345\275\223\344\272\2160\357\274\211\357\274\214\345\210\231\345\217\257\344\273\245\351\200\222\345\275\222\345\234\260\346\211\223\345\274\200\344\270\216\347\251\272\347\233\270\351\202\273\347\232\204\346\226\271\345\235\227\357\274\233\345\246\202\346\236\234\344\270"
                        "\215\345\271\270\350\247\246\351\233\267\357\274\214\345\210\231\346\270\270\346\210\217\347\273\223\346\235\237\343\200\202</span></p></body></html>", nullptr));
        label_5->setText(QApplication::translate("infoDialog", "\345\210\235\347\272\247\357\274\2329*9\357\274\21410\351\233\267", nullptr));
        label_2->setText(QApplication::translate("infoDialog", "\345\217\263\351\224\256\345\215\225\345\207\273", nullptr));
        textBrowser_3->setHtml(QApplication::translate("infoDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\217\263\351\224\256\345\215\225\345\207\273\357\274\232\345\234\250\345\210\244\346\226\255\344\270\272\345\234\260\351\233\267\347\232\204\346\226\271\345\235\227\344\270\212\346\214\211\344\270\213\345\217\263\351\224\256\357\274\214\345\217\257\344\273\245\346\240\207\350\256\260\345\234\260\351\233\267\357\274\210\346\230\276\347\244\272\344\270\272\345\260\217\347\272\242\346\227\227\357\274\211\343\200\202\351\207\215\345\244\215\344\270\200\346\254\241\346\223\215\344\275\234\345\217\257\347\224\250\351\227\256\345\217\267\350\277\233\350\241\214\346\240"
                        "\207\350\256\260\344\270\215\347\241\256\345\256\232\347\232\204\346\226\271\345\235\227\357\274\214\351\207\215\345\244\215\344\270\244\346\254\241\346\223\215\344\275\234\345\217\226\346\266\210\346\240\207\351\233\267\343\200\202 </p></body></html>", nullptr));
        label_6->setText(QApplication::translate("infoDialog", "\344\270\255\347\272\247\357\274\23216*16\357\274\21440\351\233\267", nullptr));
        label_3->setText(QApplication::translate("infoDialog", "\345\217\214\345\207\273    ", nullptr));
        textBrowser_2->setHtml(QApplication::translate("infoDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\267\246\351\224\256\345\217\214\345\207\273\357\274\232\345\275\223\345\217\214\345\207\273\344\275\215\347\275\256\345\221\250\345\233\264\345\267\262\346\240\207\350\256\260\351\233\267\346\225\260\347\255\211\344\272\216\350\257\245\344\275\215\347\275\256\346\225\260\345\255\227\346\227\266\346\223\215\344\275\234\346\234\211\346\225\210\357\274\214\347\233\270\345\275\223\344\272\216\345\257\271\350\257\245\346\225\260\345\255\227\345\221\250\345\233\264\346\234\252\346\211\223\345\274\200\347\232\204\346\226\271\345\235\227\345\235\207\350\277\233\350\241"
                        "\214\344\270\200\346\254\241\345\267\246\351\224\256\345\215\225\345\207\273\346\223\215\344\275\234\343\200\202\345\234\260\351\233\267\346\234\252\346\240\207\350\256\260\345\256\214\345\205\250\346\227\266\344\275\277\347\224\250\345\217\214\345\207\273\346\227\240\346\225\210\343\200\202\350\213\245\346\225\260\345\255\227\345\221\250\345\233\264\346\234\211\346\240\207\351\224\231\347\232\204\345\234\260\351\233\267\357\274\214\345\210\231\346\270\270\346\210\217\347\273\223\346\235\237\357\274\214\346\240\207\351\224\231\347\232\204\345\234\260\351\233\267\344\270\212\344\274\232\346\230\276\347\244\272\344\270\200\344\270\252\342\200\234 \303\227\342\200\235\343\200\202 </p></body></html>", nullptr));
        label_7->setText(QApplication::translate("infoDialog", "\351\253\230\347\272\247\357\274\23216*30\357\274\21499\351\233\267", nullptr));
        label_9->setText(QApplication::translate("infoDialog", "\347\202\271\345\207\273\347\254\221\350\204\270\345\217\257\345\277\253\351\200\237\345\274\200\345\261\200", nullptr));
        label_8->setText(QString());
        label_4->setText(QApplication::translate("infoDialog", "\347\224\250\346\234\200\347\237\255\347\232\204\346\227\266\351\227\264\346\211\276\345\210\260\346\211\200\346\234\211\345\234\260\351\233\267\345\220\247\357\274\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class infoDialog: public Ui_infoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFODIALOG_H
