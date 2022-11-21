#include "mainwindow.h"
#include "ui_mainwindow.h"

#include<QVector>
#include<QDebug>
QVector<QString> vpb;
QVector<QString> vsd;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    vpb.push_back("c");
    vpb.push_back("cpp");
    vpb.push_back("Embedded");
    vpb.push_back("java");
    vpb.push_back("python");

    for(int i=0;i<vpb.size();i++)
    {
        ui->comboBox_ip->addItem(vpb[i]);
    }

    connect(ui->pushButton_enter,SIGNAL(clicked()),this,SLOT(getcombo()) );
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(showincobo()));


}

void MainWindow::showincobo()
{
   for(int i=0;i<vsd.size();i++)
   {
       ui->comboBox_op->addItem(vsd[i]);
   }
}

void MainWindow::getcombo()
{
    QString cinp= ui->comboBox_ip->currentText();
    vsd.push_back(cinp);

}

MainWindow::~MainWindow()
{
    delete ui;
}

