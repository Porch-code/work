#ifndef CONFIGDIALOG_H
#define CONFIGDIALOG_H

#include <QDialog>

namespace Ui {
class ConfigDialog;
}

class ConfigDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ConfigDialog(QWidget *parent = nullptr);
    ~ConfigDialog();
    int height,width,mines;
private slots:
    void on_buttonBox_accepted();

private:
    Ui::ConfigDialog *ui;
};

#endif // CONFIGDIALOG_H
