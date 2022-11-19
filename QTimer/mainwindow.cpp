#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    timer=new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(display()));
            timer->start(100);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::display()
{
    qDebug()<<"timeout";
}

