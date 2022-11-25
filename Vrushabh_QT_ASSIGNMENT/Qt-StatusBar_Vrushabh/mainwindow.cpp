#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QStatusBar>

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
    QString username=ui->lineEdit->text();
    QString password=ui->lineEdit_2->text();
    if(username=="Vrushabh" && password=="1234")
    {
       ui->statusbar->showMessage("Username and Pssword is correct");
    }
    else
        ui->statusbar->showMessage("Username and Pssword is not correct");
}

