#ifndef PLAYFRAME_H
#define PLAYFRAME_H

#include <QFrame>
#include <vector>
#include <QPoint>
#include <QMouseEvent>
#include <QTimerEvent>
#include "mineframe.h"
using namespace  std;

namespace Ui {
class playFrame;
}

class playFrame : public QFrame
{
    Q_OBJECT

public:
    explicit playFrame(QWidget *parent = nullptr);
    ~playFrame();
    //const int width=9,height=9,mines=10;
    int width,height,mines;
    int size;
    bool first;
    vector<QPoint> cells;
    vector <int> count;
    void initCells();//申请空间
    void reset();
    void deployMines();//布雷
    void dump();
    void updateCount(QPoint q);
    bool check();//检查是否游戏成功
    vector <MineFrame *> frame;

private:
    Ui::playFrame *ui;

protected:
    vector <int>minecells;
    void showsurrounding(QPoint q);
    int checksurrounding(QPoint q);
    void doublesurrounding(QPoint q);

public slots:
    void dealleft(int temp);
    void dealright(int temp);
    void dealdouble(int temp);

signals:
    void scoresignal(int n);
    void timesignal(bool b);
};

#endif // PLAYFRAME_H
