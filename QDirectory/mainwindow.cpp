#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QDir>
#include<QMessageBox>
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
    QDir dir("/home/ubuntu/vi/folder");
    if(dir.exists())
    {
        QMessageBox::information(this,"","dir exists");
    }
    else
    {
        dir.mkpath("/home/ubuntu/vi/folder");
    }
}

