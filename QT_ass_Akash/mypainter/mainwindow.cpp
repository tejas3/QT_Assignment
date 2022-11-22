#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QPainter>
#include<QPaintEvent>
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

void MainWindow::paintEvent(QPaintEvent *e)
{
    QPainter painter(this);
 QPen paintpen(Qt::black);
   paintpen.setWidth(6);

 QPen linepen(Qt::red);
    linepen.setWidth(2);

    QPoint P1;
    P1.setX(10);
    P1.setY(10);

    QPoint P2;
    P2.setX(100);
    P2.setY(100);

    painter.setPen(linepen);
    painter.drawLine(P1,P2);

    painter.setPen(Qt::blue);
    painter.drawLine(100,10,100,500);


}
