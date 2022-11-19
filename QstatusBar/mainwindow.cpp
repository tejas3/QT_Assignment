#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QtGui>
#include<QtCore>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(on_actionsomething_triggered()));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_actionsomething_triggered()
{
     ui->statusbar->showMessage("vikas",2000);
     ui->progressBar->setMaximum(50);
}

