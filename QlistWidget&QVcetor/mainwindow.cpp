#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QVector>
#include<QListWidget>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(pushButton_clicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::pushButton_clicked()
{
    QVector<QString>obj;
    obj.push_back("vikas");
    obj.push_back("vivek");
    obj.push_back("akash");

       for(auto i=obj.begin();i!=obj.end();i++)
   {
       ui->listWidget->addItem(*i);
    }
    }

