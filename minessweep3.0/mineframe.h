#ifndef MINEFRAME_H
#define MINEFRAME_H

#include <QFrame>
#include <QMouseEvent>
namespace Ui {
class MineFrame;
}

class MineFrame : public QFrame
{
    Q_OBJECT

public:
    explicit MineFrame(QWidget *parent = nullptr);
    ~MineFrame();
    Ui::MineFrame *ui;
    void change();
    bool display;
    int flag;
private:

public slots:
    void mousePressEvent(QMouseEvent *e);
    void mouseDoubleClickEvent(QMouseEvent *event);
signals:
    void presssignals(int n);
    void flagsignals(int n);
    void doublesignals(int n);
};

#endif // MINEFRAME_H
