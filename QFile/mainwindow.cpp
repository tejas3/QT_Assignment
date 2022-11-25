#include "mainwindow.h"
#include "ui_mainwindow.h"

#include<QMessageBox>
#include<QFile>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(push()));
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::push()
{

    QFile file("/home/ubuntu/vi/some.txt");
          if(!file.open(QFile::WriteOnly|QFile::Text))
          {
              QMessageBox::warning(this,"title","file not open");

          }
          QTextStream out(&file);
          QString text;
          text="hello";
          out<<text;
          file.flush();
          file.close();
          if(file.open(QFile::ReadOnly|QFile::Text))
          {
              QTextStream in(&file);
              QString line = in.readAll();
              qDebug()<<line;
          }
}



