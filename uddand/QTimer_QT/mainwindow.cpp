#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("QTimer_QT");
    timer=new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(:myFunction()));
    timer->start(10000);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::myFunction()
{
    qDebug()<<"status.....";

}

