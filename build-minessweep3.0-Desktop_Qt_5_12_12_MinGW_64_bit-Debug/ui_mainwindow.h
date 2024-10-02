/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>
#include <playframe.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_N;
    QAction *action_B;
    QAction *action_I;
    QAction *action_E;
    QAction *action_C;
    QAction *action_X;
    QAction *action;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QFrame *frametop;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout;
    QLCDNumber *lcdNumberScore;
    QSpacerItem *horizontalSpacer;
    QFrame *frameEmotion;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer_2;
    QLCDNumber *lcdNumberTime;
    playFrame *frame;
    QMenuBar *menubar;
    QMenu *menu_G;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(350, 428);
        MainWindow->setMaximumSize(QSize(16777215, 16777215));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/pic/icon.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        action_N = new QAction(MainWindow);
        action_N->setObjectName(QString::fromUtf8("action_N"));
        QFont font;
        action_N->setFont(font);
        action_N->setShortcutContext(Qt::WindowShortcut);
        action_N->setVisible(true);
        action_N->setMenuRole(QAction::NoRole);
        action_N->setShortcutVisibleInContextMenu(false);
        action_B = new QAction(MainWindow);
        action_B->setObjectName(QString::fromUtf8("action_B"));
        action_B->setFont(font);
        action_B->setVisible(true);
        action_B->setShortcutVisibleInContextMenu(false);
        action_I = new QAction(MainWindow);
        action_I->setObjectName(QString::fromUtf8("action_I"));
        action_I->setFont(font);
        action_I->setVisible(true);
        action_I->setIconVisibleInMenu(false);
        action_I->setShortcutVisibleInContextMenu(false);
        action_E = new QAction(MainWindow);
        action_E->setObjectName(QString::fromUtf8("action_E"));
        action_E->setFont(font);
        action_E->setVisible(true);
        action_E->setShortcutVisibleInContextMenu(false);
        action_C = new QAction(MainWindow);
        action_C->setObjectName(QString::fromUtf8("action_C"));
        action_C->setFont(font);
        action_C->setVisible(true);
        action_C->setShortcutVisibleInContextMenu(false);
        action_X = new QAction(MainWindow);
        action_X->setObjectName(QString::fromUtf8("action_X"));
        action_X->setFont(font);
        action_X->setVisible(true);
        action_X->setShortcutVisibleInContextMenu(false);
        action = new QAction(MainWindow);
        action->setObjectName(QString::fromUtf8("action"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        frametop = new QFrame(centralwidget);
        frametop->setObjectName(QString::fromUtf8("frametop"));
        frametop->setMinimumSize(QSize(0, 60));
        frametop->setMaximumSize(QSize(11111, 60));
        frametop->setAcceptDrops(false);
        frametop->setStyleSheet(QString::fromUtf8(""));
        frametop->setFrameShape(QFrame::Panel);
        frametop->setFrameShadow(QFrame::Sunken);
        frametop->setLineWidth(3);
        gridLayout_2 = new QGridLayout(frametop);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lcdNumberScore = new QLCDNumber(frametop);
        lcdNumberScore->setObjectName(QString::fromUtf8("lcdNumberScore"));
        lcdNumberScore->setMaximumSize(QSize(80, 16777215));
        lcdNumberScore->setStyleSheet(QString::fromUtf8("background:black;\n"
"color:rgb(255, 0, 0)"));
        lcdNumberScore->setFrameShape(QFrame::Panel);
        lcdNumberScore->setFrameShadow(QFrame::Sunken);
        lcdNumberScore->setLineWidth(2);
        lcdNumberScore->setDigitCount(3);
        lcdNumberScore->setSegmentStyle(QLCDNumber::Flat);
        lcdNumberScore->setProperty("value", QVariant(333.000000000000000));

        horizontalLayout->addWidget(lcdNumberScore);

        horizontalSpacer = new QSpacerItem(30, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        frameEmotion = new QFrame(frametop);
        frameEmotion->setObjectName(QString::fromUtf8("frameEmotion"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frameEmotion->sizePolicy().hasHeightForWidth());
        frameEmotion->setSizePolicy(sizePolicy);
        frameEmotion->setMaximumSize(QSize(31, 16777215));
        frameEmotion->setAcceptDrops(false);
        frameEmotion->setLayoutDirection(Qt::LeftToRight);
        frameEmotion->setFrameShape(QFrame::Panel);
        frameEmotion->setFrameShadow(QFrame::Raised);
        frameEmotion->setLineWidth(3);
        pushButton = new QPushButton(frameEmotion);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(0, 0, 30, 30));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);
        pushButton->setAutoFillBackground(false);
        pushButton->setStyleSheet(QString::fromUtf8("border:0px;"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/pic/happy.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon1);
        pushButton->setIconSize(QSize(25, 25));
        pushButton->setCheckable(false);
        pushButton->setAutoRepeat(false);
        pushButton->setAutoExclusive(false);
        pushButton->setAutoDefault(false);
        pushButton->setFlat(true);

        horizontalLayout->addWidget(frameEmotion);

        horizontalSpacer_2 = new QSpacerItem(30, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        lcdNumberTime = new QLCDNumber(frametop);
        lcdNumberTime->setObjectName(QString::fromUtf8("lcdNumberTime"));
        lcdNumberTime->setMaximumSize(QSize(80, 16777215));
        lcdNumberTime->setStyleSheet(QString::fromUtf8("background:black;\n"
"color:rgb(255, 0, 0)"));
        lcdNumberTime->setFrameShape(QFrame::Panel);
        lcdNumberTime->setFrameShadow(QFrame::Sunken);
        lcdNumberTime->setLineWidth(2);
        lcdNumberTime->setDigitCount(3);
        lcdNumberTime->setSegmentStyle(QLCDNumber::Flat);
        lcdNumberTime->setProperty("value", QVariant(0.000000000000000));

        horizontalLayout->addWidget(lcdNumberTime);

        horizontalLayout->setStretch(2, 1);

        gridLayout_2->addLayout(horizontalLayout, 0, 0, 1, 1);


        gridLayout->addWidget(frametop, 0, 0, 1, 1);

        frame = new playFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::Panel);
        frame->setFrameShadow(QFrame::Sunken);
        frame->setLineWidth(3);
        frame->setMidLineWidth(0);

        gridLayout->addWidget(frame, 1, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 350, 22));
        menubar->setContextMenuPolicy(Qt::DefaultContextMenu);
        menu_G = new QMenu(menubar);
        menu_G->setObjectName(QString::fromUtf8("menu_G"));
        QFont font1;
        font1.setUnderline(true);
        menu_G->setFont(font1);
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu_G->menuAction());
        menubar->addAction(menu->menuAction());
        menu_G->addAction(action_N);
        menu_G->addSeparator();
        menu_G->addAction(action_B);
        menu_G->addAction(action_I);
        menu_G->addAction(action_E);
        menu_G->addAction(action_C);
        menu_G->addSeparator();
        menu_G->addAction(action_X);
        menu->addAction(action);

        retranslateUi(MainWindow);

        pushButton->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "minessweeper", nullptr));
        action_N->setText(QApplication::translate("MainWindow", "\345\274\200\345\261\200", nullptr));
#ifndef QT_NO_SHORTCUT
        action_N->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_NO_SHORTCUT
        action_B->setText(QApplication::translate("MainWindow", "\345\210\235\347\272\247", nullptr));
#ifndef QT_NO_SHORTCUT
        action_B->setShortcut(QApplication::translate("MainWindow", "Ctrl+B", nullptr));
#endif // QT_NO_SHORTCUT
        action_I->setText(QApplication::translate("MainWindow", "\344\270\255\347\272\247", nullptr));
#ifndef QT_NO_SHORTCUT
        action_I->setShortcut(QApplication::translate("MainWindow", "Ctrl+I", nullptr));
#endif // QT_NO_SHORTCUT
        action_E->setText(QApplication::translate("MainWindow", "\351\253\230\347\272\247", nullptr));
#ifndef QT_NO_SHORTCUT
        action_E->setShortcut(QApplication::translate("MainWindow", "Ctrl+E", nullptr));
#endif // QT_NO_SHORTCUT
        action_C->setText(QApplication::translate("MainWindow", "\350\207\252\345\256\232\344\271\211", nullptr));
#ifndef QT_NO_SHORTCUT
        action_C->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_NO_SHORTCUT
        action_X->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#ifndef QT_NO_SHORTCUT
        action_X->setShortcut(QApplication::translate("MainWindow", "Ctrl+X", nullptr));
#endif // QT_NO_SHORTCUT
        action->setText(QApplication::translate("MainWindow", "\346\223\215\344\275\234\350\257\264\346\230\216", nullptr));
#ifndef QT_NO_SHORTCUT
        action->setShortcut(QApplication::translate("MainWindow", "Ctrl+H", nullptr));
#endif // QT_NO_SHORTCUT
        pushButton->setText(QString());
        menu_G->setTitle(QApplication::translate("MainWindow", "\346\270\270\346\210\217", nullptr));
        menu->setTitle(QApplication::translate("MainWindow", "\345\270\256\345\212\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
