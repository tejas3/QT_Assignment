#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton_3,SIGNAL(clicked(bool)),this,SLOT(close()));
    connect(ui->pushButton,SIGNAL(clicked(bool)),this,SLOT(showMaximized()));
    connect(ui->pushButton_2,SIGNAL(clicked(bool)),this,SLOT(showMinimized()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

