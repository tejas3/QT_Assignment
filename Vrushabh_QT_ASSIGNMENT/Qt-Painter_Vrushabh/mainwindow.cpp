#include "mainwindow.h"
#include "ui_mainwindow.h"

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
            linepen.setWidth(7);
            QPoint p1;
            p1.setX(10);
            p1.setY(10);

            QPoint p2;
            p2.setX(100);
            p2.setY(100);
            painter.setPen(linepen);
    painter.drawLine(p1,p2);
}

