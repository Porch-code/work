#include "mineframe.h"
#include "ui_mineframe.h"
#include <QDebug>

MineFrame::MineFrame(QWidget *parent) :
    QFrame(parent),
    ui(new Ui::MineFrame)
{
    ui->setupUi(this);

    this->resize(30, 30);
    this->setFrameShape(Panel);
    this->setFrameShadow(Raised);
    this->setLineWidth(3);
    this->show();

    display = false;
    flag = 0;

    //qDebug()<<"g";
}

MineFrame::~MineFrame()
{
    delete ui;
}

void MineFrame::mousePressEvent(QMouseEvent *e)
{
    if(e->button() == Qt::LeftButton)
    {
        change();
        //qDebug()<<"g";
    }

    if(e->button() == Qt::RightButton)
    {
        if(display == false)
        {
            if(flag == 0)            //标记为地雷
            {
                this->ui->label->setPixmap(QPixmap(":/pic/flag.png"));
                flag = 1;
            }
            else if(flag==1)         //标记为存疑
            {
                this->ui->label->setPixmap(QPixmap(":/pic/question.png"));
                flag = 2;
            }
            else if(flag == 2)       //清空标记
            {
                this->ui->label->clear();
                flag = 0;
            }

            int temp = this->objectName().toInt();

            emit flagsignals(temp);
        }
    }
}

void MineFrame::change()
{
    if(display == false && flag == 0)              //没有被点开并且没有被标记
    {
        this->setFrameShadow(Plain);
        this->setStyleSheet("border:1.25px solid #828282;background-color:#c0c0c0;");
        int temp = this->objectName().toInt();
        display  = true;
        emit presssignals(temp);
        //一定要注意这两句的位置不能调换。
    }
}

void MineFrame::mouseDoubleClickEvent(QMouseEvent *event)
{
    if(event->button() == Qt::LeftButton)
    {
        if(display == true)
        {
            int temp = this->objectName().toInt();
            emit doublesignals(temp);
        }
    }
}
