#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QStatusBar>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Progree_Bar_QT");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QString username=ui->lineEdit->text();
    QString password=ui->lineEdit_2->text();
    if(username=="Delta" && password=="1246")
    {
       ui->statusbar->showMessage("Username and Pssword is correct",500);
    }
    else
        ui->statusbar->showMessage("Username and Pssword is not correct",500);
}

