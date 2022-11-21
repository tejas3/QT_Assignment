#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include<QPixmap>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix(":/img/Image/folder-1449.png");
    ui->label_4->setPixmap(pix.scaled(100,100));
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_Login_clicked()
{
    QString UserName = ui-> lineEdit_UserName->text();
    QString PassWord = ui-> lineEdit_Password->text();
    if(UserName == "Delta" && PassWord == "1234") {
        QMessageBox:: information(this,"Login","Welcome");
    }
    else {

         QMessageBox:: warning(this,"Login","Incorrect UserName And PassWord");
    }
}

