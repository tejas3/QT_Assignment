#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMap>
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
    QMap<int,char>map;

    map.insert(1,'a');
    map.insert(2,'b');
    map.insert(3,'c');
    foreach (char value, map)
    {
        qDebug()<<value;
    }
    map.take(2);
    qDebug()<<"-------";
    foreach (char value, map)
    {
        qDebug()<<value;
    }

}
