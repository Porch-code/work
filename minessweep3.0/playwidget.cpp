#include "playwidget.h"
#include "ui_playwidget.h"
#include <QDebug>
#include <QFrame>
playWidget::playWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::playWidget)
{
    ui->setupUi(this);
}

playWidget::~playWidget()
{
    delete ui;
}
void playWidget::paintEvent(QPaintEvent *)
{
//    QPainter paint(this);
//    QPen pen(QColor(55,55,55));
//    QBrush brush(QColor(14,242,32));
//    paint.setPen(pen);
//    paint.setBrush(brush);
//    paint.drawRect(5,5,200,200);
    //paint.drawLine(205,205,205,300);
    QFrame a;
    a.setFrameRect(QRect(0,0,50,50));

}
