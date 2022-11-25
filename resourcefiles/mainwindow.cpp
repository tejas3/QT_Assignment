#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QPdfWriter>
#include<QFileDialog>
#include<QPainter>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{

    QPixmap pix2(":/delta3.png");
    QString fileName = QFileDialog::getSaveFileName(this, tr("Save File"),
      "D:/""image",tr("PDF (*.pdf)"));

      QPdfWriter pdf(fileName);
QPainter painter(&pdf);
painter.drawPixmap(200,4000,pix2);

painter.end();
}

