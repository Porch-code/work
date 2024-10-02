#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPainter>
#include <QColor>
#include <QDebug>
#include <QPixmap>
#include "playframe.h"
#include "infodialog.h"
#include <QFrame>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    w = 9;
    h = 9;
    m = 10;

    t_go = false;
    time = 0;
    score = m;
    config.hide();
    ui->lcdNumberTime->display("000");
    ui->lcdNumberScore->display("010");

    this->setFixedSize(10+30*w+10+6, 140+30*h+6);

    connect((ui->frame), SIGNAL(timesignal(bool)), this, SLOT(timego(bool)));
    connect((ui->frame), SIGNAL(scoresignal(int)), this, SLOT(updatescore(int)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::timerEvent(QTimerEvent *e)
{
    if(e->timerId() == t)
    {
        time++;
        QString str = QString("%1").arg(time, 3, 10, QChar('0'));
        ui->lcdNumberTime->display(str);
        if(ui->frame->check() && score == 0)
        {
            killTimer(t);
            //QMessageBox::information(this,"游戏结束","恭喜你，成功了");
            ui->pushButton->setIcon(QPixmap(":/pic/success.png"));
            for(int i = 0; i < ui->frame->frame.size(); i++)
            {
                ui->frame->frame[i]->display = true;
            }
        }
    }
}
void MainWindow::updatescore(int n)
{
    score += n;
    //qDebug()<<"cc";
    QString str=QString("%1").arg(score, 3, 10, QChar('0'));

    ui->lcdNumberScore->display(str);
}

void MainWindow::on_action_N_triggered()//开局
{
    score = m;
    time = 0;
    if(t_go == true)
    {
        killTimer(t);//计时结束
        t_go = false;//计时结束
    }
    ui->lcdNumberTime->display("000");
    QString str = QString("%1").arg(score, 3, 10, QChar('0'));
    ui->lcdNumberScore->display(str);
    ui->frame->reset();
    ui->pushButton->setIcon(QPixmap(":/pic/happy.png"));
}

void MainWindow::on_action_B_triggered()//初级
{
    ui->frame->width = 9;
    ui->frame->height = 9;
    ui->frame->mines = 10;
    w = 9;
    h = 9;
    m = 10;
    score = 10;
    time = 0;
    this->setFixedSize(10 + 30 * w + 10 + 6, 140 + 30 * h + 6);
    ui->lcdNumberScore->display("010");
    ui->lcdNumberTime->display("000");
    ui->frame->reset();
    if(t_go == true)
    {
        killTimer(t);//计时结束
        t_go = false;//计时结束
    }
}

void MainWindow::on_action_I_triggered()//中级
{
    ui->frame->width = 16;
    ui->frame->height = 16;
    ui->frame->mines = 40;
    w = 16;
    h = 16;
    m = 40;
    score = 40;
    time = 0;
    this->setFixedSize(10 + 30 * w + 10 + 6, 140 + 30 * h + 6);
    ui->lcdNumberScore->display("040");
    ui->lcdNumberTime->display("000");
    ui->frame->reset();
    if(t_go == true)
    {
        killTimer(t);//计时结束
        t_go = false;//计时结束
    }
}

void MainWindow::on_action_E_triggered()//高级
{
    ui->frame->width = 30;
    ui->frame->height = 16;
    ui->frame->mines = 99;
    w = 30;
    h = 16;
    m = 99;
    score = 99;
    time = 0;
    this->setFixedSize(10 + 30 * w + 10 + 6, 140 + 30 * h + 6);
    ui->lcdNumberScore->display("099");
    ui->lcdNumberTime->display("000");
    ui->frame->reset();
    if(t_go == true)
    {
        killTimer(t);//计时结束
        t_go = false;//计时结束
    }
}

void MainWindow::on_action_C_triggered()//自定义
{
    config.exec();
    w = config.width;
    ui->frame->width = config.width;
    h = config.height;
    ui->frame->height = config.height;
    m = config.mines;
    ui->frame->mines = config.mines;
    score = config.mines;
    QString str = QString("%1").arg(score, 3, 10, QChar('0'));
    ui->lcdNumberScore->display(str);
    time = 0;
    ui->lcdNumberTime->display("000");
    this->setFixedSize(10 + 30 * w + 10 + 6, 140 + 30 * h + 6);
    ui->frame->reset();
    if(t_go == true)
    {
        killTimer(t);//计时结束
        t_go = false;//计时结束
    }
}

void MainWindow::on_action_X_triggered()//退出
{
    qApp->exit(0);
}

void MainWindow::on_pushButton_pressed()
{
    ui->frameEmotion->setFrameShadow(QFrame::Sunken);
    ui->frameEmotion->setLineWidth(1);
}

void MainWindow::on_pushButton_released()
{
    ui->frameEmotion->setFrameShadow(QFrame::Raised);
    ui->frameEmotion->setLineWidth(3);
    ui->frame->reset();
    if(t_go == true)
    {
        killTimer(t);//计时结束
        t_go=false;//计时结束
    }

    time = 0;
    score = m;
    ui->lcdNumberTime->display("000");
    QString str = QString("%1").arg(score, 3, 10, QChar('0'));
    ui->lcdNumberScore->display(str);
    ui->pushButton->setIcon(QPixmap(":/pic/happy.png"));
}

void MainWindow::timego(bool b)
{
    if(b == true && t_go == false)
    {
        t_go = true;//计时开始
        time = 1;
        ui->lcdNumberTime->display("001");
        t = this->startTimer(1000);//开始计时
    }
    else if(b == false && t_go == true)
    {
        killTimer(t);//计时结束
        t_go = false;//计时结束
        ui->pushButton->setIcon(QPixmap(":/pic/sad.png"));
    }
}

void MainWindow::on_action_triggered()
{
    infoDialog info;
    info.exec();
}
