#include "configdialog.h"
#include "ui_configdialog.h"
ConfigDialog::ConfigDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ConfigDialog)
{
    ui->setupUi(this);
    height = 9;
    width = 9;
    mines = 10;
}

ConfigDialog::~ConfigDialog()
{
    delete ui;
}

void ConfigDialog::on_buttonBox_accepted()
{
    height = ui->lineEditheight->text().toInt();
    width = ui->lineEditwidth->text().toInt();
    mines = ui->lineEditmines->text().toInt();

    ui->lineEditheight->setText(QString::number(height));
    ui->lineEditwidth->setText(QString::number(width));
    ui->lineEditmines->setText(QString::number(mines));
}
