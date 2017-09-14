#include "widget1.h"
#include "ui_widget1.h"

Widget1::Widget1(QWidget *parent,int *i) :
    QWidget(parent),changedValue(*i),
    ui(new Ui::Widget1)
{
    ui->setupUi(this);
    ui->label->setText(QString::number(changedValue));
}

Widget1::~Widget1()
{
    delete ui;
}



void Widget1::on_pushButton_2_clicked()
{
    changedValue--;
    ui->label->setText(QString::number(changedValue));
}

void Widget1::on_pushButton_3_clicked()
{
    this->hide();
}

void Widget1::on_pushButton_clicked()
{
    changedValue++;
    ui->label->setText(QString::number(changedValue));
}

