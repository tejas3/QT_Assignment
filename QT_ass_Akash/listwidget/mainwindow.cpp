#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QVector>
QVector<QString> v1;



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    v1.push_back("c");
    v1.push_back("cpp");
    v1.push_back("cpp-11");
    v1.push_back("Embedded");
    v1.push_back("python");

    for (int i=0;i<v1.size();i++)
    {
      ui->listWidget->addItem(v1[i]);
    }


}

MainWindow::~MainWindow()
{
    delete ui;
}

