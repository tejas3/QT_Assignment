#include "mainwindow.h"
#include "ui_mainwindow.h"
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
   // QMessageBox::about(this,"Title","This is my button");
    //QMessageBox::aboutQt(this,"Title");
//    QMessageBox::critical(this,"Title","This is Not my button");
//    QMessageBox::question(this,"Title","This is your button");
//    QMessageBox::information(this,"Title","This is my button");
    QMessageBox::warning(this,"Title","This is my button");
}

