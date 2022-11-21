#include "mainwindow.h"
#include "ui_mainwindow.h"

#include<QStringList>
#include<QDebug>
   QStringList colors{"voilet","indigo", "blue","green", "yellow","red"};
   QString country="India, Australia, England ,Shrilanka";

   QStringList sl;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    connect(ui->pushButton_show ,SIGNAL(clicked()),this,SLOT(showdata()));
    connect(ui->pushButton_split,SIGNAL(clicked()),this,SLOT(splitstring()));
    connect(ui->pushButton_join,SIGNAL(clicked()),this,SLOT(joinstring()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::showdata()
{
    for(int i=0;i<colors.size();i++)
    {
       qDebug()<< colors.at(i)<<endl;
    }

    for(int i=0;i<sl.size();i++)
    {
        qDebug()<< sl.at(i)<<endl;
    }
    qDebug()<<country<<endl;
}

void MainWindow::splitstring()
{
    sl=country.split(",");
}

void MainWindow::joinstring()
{
    sl.join(country);
}

