#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QList>
#include<QMessageBox>
QList<int> l1;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    l1.append(10);
    l1.append(20);
    l1.append(30);
    l1.append(40);
    l1.append(50);
    l1.append(60);

    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(SHOWLIST()) );
    connect(ui->pushButton_add,SIGNAL(clicked()),this,SLOT(add()));
    connect(ui->pushButton_erase,SIGNAL(clicked()),this,SLOT(eraseone()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::SHOWLIST()
{
    QList<int>::iterator it;
    for(it=l1.begin();it<l1.end();it++)
    {
        QString str= QString::number(*it);
        QMessageBox::information(this,"data                        ",str);
    }
}

void MainWindow::add()
{
    static int i=60;
    i=i+10;
    l1.append(i);
}

void MainWindow::eraseone()
{
    l1.pop_back();
}

