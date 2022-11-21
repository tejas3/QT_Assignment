#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QListWidgetItem *item=new QListWidgetItem(QIcon(":/rec/delete-5862.png"),"C");
    ui->listWidget->addItem("C");
    QListWidgetItem *item1=new QListWidgetItem(QIcon(":/rec/folder-1449.png"),"CPP");
    ui->listWidget->addItem("CPP");
    QListWidgetItem *item2=new QListWidgetItem(QIcon(":/rec/remove-folder-11634.png"),"EMBEDDED C");
    ui->listWidget->addItem("EMBEDDED C");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QMessageBox::information(this,"Title",ui->listWidget->currentItem()->text());
}

