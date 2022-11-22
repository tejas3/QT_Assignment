#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("QPAINTER_QT");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::paintEvent(QPaintEvent *paint)
{
    QPainter painter(this);
    QPen paintpen(Qt::green);
    paintpen.setWidth(15);

    QPen linepen(Qt::black);
            linepen.setWidth(15);
            QPoint p1;
            p1.setX(150);
            p1.setY(150);

            QPoint p2;
            p2.setX(200);
            p2.setY(200);
            painter.setPen(linepen);
    painter.drawLine(p1,p2);
}

