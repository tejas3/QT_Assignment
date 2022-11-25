#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QStringList>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_clicked()
{
    QStringList s={"vikas","vivek","akash"};
    for(int i=0;i!=s.size();i++)
    {
        qDebug()<<s[i];
    }
    QString str=s.join(",");
    qDebug()<<str;
    QStringList s1=str.split(',');
    for(int i=0;i!=s1.size();i++)
    {
        qDebug()<<s1[i];
    }
}

