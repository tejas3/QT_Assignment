#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked()),ui->comboBox,SLOT(clear()));
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(combo()));

}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::combo()
{
    qDebug()<<"coming";
    ui->comboBox->setEditable(true);
    QString s= ui->comboBox->currentText();
   qDebug()<<s;
}


