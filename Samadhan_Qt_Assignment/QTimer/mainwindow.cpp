#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()),this ,SLOT(function()));
    timer->start(4000);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::function(){
    qDebug() << "Timer...";
}
