#include "playframe.h"
#include "ui_playframe.h"
#include "mineframe.h"
#include "ui_mineframe.h"
#include <iostream>
#include <QDebug>
#include <QPoint>
#include <QPixmap>
#include <vector>
#include <QLabel>
#include <QPushButton>
#include <QMessageBox>
#include <QTimer>
#include <QTimerEvent>
#include <QColor>

using namespace std;

playFrame::playFrame(QWidget *parent)
    :QFrame(parent), ui(new Ui::playFrame)
{
    ui->setupUi(this);
    srand(time(NULL));
    //qDebug()<<"ttt";
    width = 9;
    height = 9;
    mines = 10;
    size = 30;

    reset();
}

playFrame::~playFrame()
{
    delete ui;
    //qDebug()<<"size"<<cells.size();
}

void playFrame::reset()
{
    //qDebug()<<mines;
    //qDebug()<<width;
    first = true;
    for(int i = 0; i < frame.size(); i++)
    {
        delete frame[i];
    }
    frame.clear();
    minecells.clear();
    cells.clear();                      //清除残留数据
    count.clear();

    initCells();
    deployMines();                      //布雷
}

void playFrame:: initCells()            //申请空间
{
    MineFrame *temp;

    for(int j = 0; j < height; j++)
    {
        for(int i = 0; i < width; i++)
        {
            temp = new MineFrame(this);
            temp->setObjectName(QString::number(j * width + i));
            temp->move(30 * i + 3, 30 * j + 3);

            frame.push_back(temp);

            connect(temp, SIGNAL(flagsignals(int)),   this,  SLOT(dealright(int)));
            connect(temp, SIGNAL(presssignals(int)),  this,  SLOT(dealleft(int)));
            connect(temp, SIGNAL(doublesignals(int)), this,  SLOT(dealdouble(int)));
        }
    }
    //qDebug()<<"ddd";
}

void playFrame::deployMines()                   //布雷
{
    for(int y = 0; y < height; y++)
    {
        for(int x = 0; x < width; x++)
        {
            cells.push_back(QPoint(x,y));
            count.push_back(0);
        }
    }

    int cpmines = mines;

    while(cpmines)
    {
        int pos = rand() % (width * height);

        if(count[pos] != -1)
        {
            cpmines--;

            count[pos] = -1;

            minecells.push_back(pos);

            int x=cells[pos].x();
            int y=cells[pos].y();

            updateCount(QPoint(x-1,y-1));
            updateCount(QPoint(x,y-1));
            updateCount(QPoint(x+1,y-1));

            updateCount(QPoint(x-1,y));
            updateCount(QPoint(x+1,y));

            updateCount(QPoint(x+1,y+1));
            updateCount(QPoint(x,y+1));
            updateCount(QPoint(x-1,y+1));
        }
    }
    //qDebug()<<"hnfn";
    //dump();
}

void playFrame::dump()
{
    //    qDebug()<<width;
    //    qDebug()<<height;
    //    qDebug()<<mines;
    for(int i = 0; i < height; i++)
    {
        for(int j = 0; j < width; j++)
        {
            qDebug()<<count[i*width+j];
        }
        qDebug()<<endl;
    }
    //qDebug()<<"----------------------";
}

void playFrame::updateCount(QPoint q)
{
    if(q.x() >= 0 && q.x() < width && q.y() >= 0 && q.y() < height)
    {
        if(count[q.y()*width+q.x()] != -1)
        {
            count[q.y()*width+q.x()]++;
        }
    }
}

void playFrame::dealleft(int temp)
{
    if(count[temp] == -1)//如果点中了雷的格子
    {
        if(first == true)//如果第一步就点中了雷
        {
            //emit timesignal(false);
            while(count[temp] == -1)
            {
                minecells.clear();
                cells.clear();      //清除残留数据
                count.clear();
                deployMines();
            }
            first = false;
        }
       else//如果不是第一步就点中雷
        {
            for(int j = 0; j < mines; j++)
            {
                if(frame[minecells[j]]->flag == 0 && minecells[j] != temp)
                {
                    frame[minecells[j]]->ui->label->setPixmap(QPixmap(":/pic/mine2.png"));
                    frame[minecells[j]]->display=true;
                }
            }

            frame[temp]->ui->label->setPixmap(QPixmap(":/pic/mine1.png"));

            for(int i = 0; i < width * height; i++)
            {
                if(frame[i]->flag == 1 && count[i] != -1)
                {
                    frame[i]->ui->label->setPixmap(QPixmap(":/pic/mine3.png"));
                }
            }
            emit timesignal(false);

            for(int i = 0; i < frame.size(); i++)
            {
                frame[i]->display=true;
            }
        }
    }

    if(count[temp] != 0 && count[temp] != -1)//如果点中了不是雷但周围有雷的格子
    {
        frame[temp]->ui->label->setText(QString::number(count[temp]));

        switch(count[temp])
        {
            case 1: frame[temp]->ui->label->setStyleSheet("color:#0000ff");break;
            case 2: frame[temp]->ui->label->setStyleSheet("color:#0000ff");break;
            case 3: frame[temp]->ui->label->setStyleSheet("color:#f91313");break;
            case 4: frame[temp]->ui->label->setStyleSheet("color:#000080");break;
            case 5: frame[temp]->ui->label->setStyleSheet("color:#800000");break;
            case 6: frame[temp]->ui->label->setStyleSheet("color:#008080");break;
            case 7: frame[temp]->ui->label->setStyleSheet("color:#080808");break;
            case 8: frame[temp]->ui->label->setStyleSheet("color:#c0c0c0");break;
        }

        emit timesignal(true);

        first = false;
    }

    if(count[temp] == 0)//如果点中了周围没有雷的格子
    {
        int x = cells[temp].x();
        int y = cells[temp].y();

        //cout<<"("<<x<<","<<y<<")"<<endl;
        showsurrounding(QPoint(x-1,y-1));
        showsurrounding(QPoint(x,y-1));
        showsurrounding(QPoint(x+1,y-1));

        showsurrounding(QPoint(x-1,y));
        showsurrounding(QPoint(x+1,y));

        showsurrounding(QPoint(x+1,y+1));
        showsurrounding(QPoint(x,y+1));
        showsurrounding(QPoint(x-1,y+1));

        emit timesignal(true);

        first=false;
    }
}

void playFrame::showsurrounding(QPoint q)
{
    //cout<<q.x()<<","<<q.y()<<endl;
    if(q.x() >=0 && q.x() < width && q.y()>=0 && q.y() < height)
    {
        int num = q.y() * width + q.x();
        if(count[num] != -1)
        {
            frame[num]->change();
        }
    }
}

void playFrame::dealright(int temp)    //处理右键事件
{
    if(frame[temp]->flag == 1)         //由空变为旗帜
    {
        emit scoresignal(-1);
    }
    else if(frame[temp]->flag == 2)    //由旗帜变为？
    {
        emit scoresignal(1);
    }

    emit timesignal(true);

    first = false;
}

bool playFrame::check()                 //判断是否成功扫出所有的雷
{
    for(int i = 0; i < mines; i++)
    {
        if(frame[minecells[i]]->flag != 1)//是否所有有雷的地方都已标记
        {
            return false;
        }
    }

    for(int i = 0; i < width * height; i++)
    {
        if(count[i] != -1 && frame[i]->display == false)
        {
            return false;
        }
    }

    return true;
}

void playFrame::dealdouble(int temp)            //处理双击事件
{
    if(count[temp] != -1 && count[temp] != 0)   //如果双击周围有雷的非雷格子
    {
        int x = cells[temp].x();
        int y = cells[temp].y();
        int sum   = checksurrounding(QPoint(x-1,y-1))+
                    checksurrounding(QPoint(x,y-1))+
                    checksurrounding(QPoint(x+1,y-1))+
                    checksurrounding(QPoint(x-1,y))+
                    checksurrounding(QPoint(x+1,y))+
                    checksurrounding(QPoint(x+1,y+1))+
                    checksurrounding(QPoint(x,y+1))+
                    checksurrounding(QPoint(x-1,y+1));

        if(sum == count[temp])
        {
            doublesurrounding(QPoint(x-1,y-1));
            doublesurrounding(QPoint(x,y-1));
            doublesurrounding(QPoint(x+1,y-1));

            doublesurrounding(QPoint(x-1,y));
            doublesurrounding(QPoint(x+1,y));

            doublesurrounding(QPoint(x+1,y+1));
            doublesurrounding(QPoint(x,y+1));
            doublesurrounding(QPoint(x-1,y+1));
            //emit timesignal(true);
        }
    }
}

int playFrame::checksurrounding(QPoint q)
{
    if(q.x() >=0 && q.x() < width && q.y() >= 0 && q.y() < height)
    {
        int num = q.y() * width + q.x();
        if(frame[num]->flag == 1)
        {
            return 1;
        }
    }

    return 0;
}

void playFrame::doublesurrounding(QPoint q)        //一次性点开周围的方格
{
    if(q.x() >= 0 && q.x() < width && q.y() >= 0 && q.y() < height)
    {
        int num = q.y()*width + q.x();
        frame[num]->change();
    }
}
