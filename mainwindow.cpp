#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "widget1.h"
#include <QDebug>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    valueneeded=new int;
    *valueneeded=0;
    ui->label->setText(QString::number(*valueneeded));
    qDebug()<<valueneeded;
    a = new Widget1(0,valueneeded);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    a->show();
}

void MainWindow::on_pushButton_2_clicked()
{
    *valueneeded=a->changedValue;
    ui->label->setText(QString::number(*valueneeded));

}

void MainWindow::on_QuitButton_clicked()
{
    QApplication::quit();
}
