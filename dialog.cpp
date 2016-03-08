#include "dialog.h"
#include "ui_dialog.h"
#include <math.h>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    double x1;
    double x2;
    double a = ui->lineEdit->text().toDouble();
    double b = ui->lineEdit_2->text().toDouble();
    double c = ui->lineEdit_3->text().toDouble();

    double d = b*b-4*a*c;

    if (d > 0)
    {
        x1 = (-b-sqrt(d))/(2*a);
        x2 = (-b+sqrt(d))/(2*a);
        ui->textEdit->setText(QString::number(x1));
        ui->textEdit->setText(QString::number(x2));
    }
    else
    {
        if (d == 0)
        {
            x1 = (-b)/(2*a);
            ui->textEdit->setText(QString::number(x1));
        }
        else
        {
            ui->textEdit->setText("Ошибка. Дискирминант меньше 0");
        }
    }
}
