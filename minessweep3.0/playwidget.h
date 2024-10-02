#ifndef PLAYWIDGET_H
#define PLAYWIDGET_H

#include <QWidget>
#include <QPainter>
#include <QPaintEvent>
namespace Ui {
class playWidget;
}

class playWidget : public QWidget
{
    Q_OBJECT

public:
    explicit playWidget(QWidget *parent = nullptr);
    ~playWidget();

private:
    Ui::playWidget *ui;
protected:
    void paintEvent(QPaintEvent *);
};

#endif // PLAYWIDGET_H
