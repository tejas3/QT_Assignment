#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(showMinimized()  ));
    connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(showMaximized()));
    connect(ui->pushButton_3,SIGNAL(clicked()),this,SLOT(close()));
    connect(ui->pushButton_4,SIGNAL(clicked()),this,SLOT(showname()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::showname()
{
    ui->label->setText("Hello ");
}


