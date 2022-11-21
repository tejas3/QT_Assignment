#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("QList_Widgets AND QMessage_BOx");
   QListWidgetItem *item1=new QListWidgetItem(QIcon(":/rr/color.png.png"),"DELTA");
    ui->listWidget->addItem(item1);
     QListWidgetItem *item2=new QListWidgetItem(QIcon(":/rr/color1.png"),"IOT");
    ui->listWidget->addItem(item2);


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QMessageBox::information(this,"title",ui->listWidget->currentItem()->text());
}

