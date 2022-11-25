#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
//    ui->comboBox->addItem(QIcon(":/rec/delete-5862.png"),"C");
//    ui->comboBox->addItem(QIcon(":/rec/folder-1449.png"),"CPP");
//    ui->comboBox->addItem(QIcon(":/rec/remove-folder-11634.png"),"EMBEDDED C");

    ui->comboBox->addItem("C");
    ui->comboBox->addItem("CPP");
    ui->comboBox->addItem("EMBEDDED C");

//    for(int i=0;i<10;i++)
//    {
//        ui->comboBox->addItem(QIcon(":/rec/delete-5862.png"),QString::number(i) + "name");
//    }


}

MainWindow::~MainWindow()
{
    delete ui;
}

