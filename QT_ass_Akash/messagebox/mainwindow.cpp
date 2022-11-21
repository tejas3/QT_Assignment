#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton_fruite ,SIGNAL(clicked()),this,SLOT(correct()));
    QMessageBox::information(this,"funny quize","what is orange");
    connect(ui->pushButton_help,SIGNAL(clicked()),this,SLOT(help()));

    connect(ui->pushButton_noting,SIGNAL(clicked()),this,SLOT(nothing()));

    connect(ui->pushButton_color,SIGNAL(clicked()),this,SLOT(color()));

    connect(ui->pushButton_fruite,SIGNAL(clicked()),this,SLOT(fruit()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::help()
{
    QMessageBox::StandardButtons ques= QMessageBox::question(this,"help page","did you understand the question",QMessageBox::Yes|QMessageBox::No );
    if(ques==QMessageBox::No)
    {
        QMessageBox::information(this,"hint","it can be fruit or color");
    }
    else
    {
        QMessageBox::information(this,"hint","Great");
    }
}

void MainWindow::nothing()
{
    QMessageBox::warning(this,"warning","Sorry you are wrong");
}

void MainWindow::color()
{
    QMessageBox::information(this," Great","you won");
}

void MainWindow::fruit()
{
    QMessageBox::information(this," Great","you won");
}

