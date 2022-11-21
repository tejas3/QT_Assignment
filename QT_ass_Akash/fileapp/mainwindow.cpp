#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QFile>
#include<QMessageBox>
#include<QTextStream>
#include<QDebug>
    QFile file("newfileapp.txt");
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton_insert,SIGNAL(clicked()),this,SLOT(inserdata()));
    connect(ui->pushButton_show,SIGNAL(clicked()),this,SLOT(SHOWDATA()) );

    if(!file.open(file.ReadOnly) )
    {
        QMessageBox::warning(this,"warning","File not found");

    }
    else
        QMessageBox::warning(this,"warning","File open succesfully");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::inserdata()
{
    file.open(QFile::WriteOnly|QFile::Append);

        QString line=ui->lineEdit->text();
        QTextStream in(&file);
        in<<line<<endl;
        ui->lineEdit->clear();
        file.close();

}

void MainWindow::SHOWDATA()
{
    file.open(QFile::ReadOnly );
    QTextStream out(&file);
    while(!out.atEnd())
    {
        qDebug()<<out.readLine();
    }
    file.close();

}

