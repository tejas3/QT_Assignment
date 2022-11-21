#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QTimer>
#include<QDebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
     QTimer *time=new QTimer(this);
     connect(time,SIGNAL(timeout()),this,SLOT(Myslot()));
     time->start(1000);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Myslot()
{
    qDebug()<<"Timer executed";
}

