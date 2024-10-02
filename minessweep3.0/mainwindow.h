#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPainter>
#include <QPaintEvent>
#include <QWidget>
#include <QMouseEvent>
#include "playframe.h"
#include "mineframe.h"
#include "configdialog.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    int w;         //宽
    int h;         //高
    int m;           //总地雷数
    ConfigDialog config;

protected:
    int t;          //计时器id
    int time;       //时间
    int score;      //剩余雷数
    bool t_go;
    void timerEvent(QTimerEvent *e);

public slots:
    void updatescore(int n);
    void timego(bool b);
private slots:
    void on_action_N_triggered();
    void on_action_B_triggered();
    void on_action_I_triggered();
    void on_action_E_triggered();
    void on_action_C_triggered();
    void on_action_X_triggered();
    void on_pushButton_pressed();
    void on_pushButton_released();
    void on_action_triggered();
};

#endif // MAINWINDOW_H
