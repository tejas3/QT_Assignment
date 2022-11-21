#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMap>
#include<QDebug>
QHash<QString,int> m1;


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    m1.insert("one",1);
    m1.insert("Two",2);
    m1.insert("Three",3);
    m1.insert("Four",4);
    m1.insert("Five",5);
    connect(ui->pushButton_show,SIGNAL(clicked()), this,SLOT(showdata()) );

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::showdata()
{
    QHashIterator<QString, int> i(m1);
      while (i.hasNext()) {
          i.next();
          qDebug()<< i.key() << ": " << i.value() <<endl;
      }
}
