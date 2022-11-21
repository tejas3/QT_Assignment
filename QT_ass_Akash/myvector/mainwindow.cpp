#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QVector>
#include<QMessageBox>
QVector<int> v1;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(30);
    v1.push_back(40);
    v1.push_back(50);

    for (int i=0;i<v1.size();i++)
    {
        QString vi= QString::number(v1[i]);
        QMessageBox::information(this,"vector",vi);

    }

}

MainWindow::~MainWindow()
{
    delete ui;
}

