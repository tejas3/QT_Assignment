#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QHash>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(button_clicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::button_clicked()
{
    QHash<int,QString>hash;

    hash.insert(1,"vikas");
    hash.insert(2,"vivek");
    hash.insert(3,"akash");
  foreach(int i,hash.keys())
   {
       qDebug()<<hash[i];
   }

}


