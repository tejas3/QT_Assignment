#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QPushButton>
#include<QSplitter>
#include<QVBoxLayout>
#include<QHBoxLayout>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QWidget *window=new QWidget;
    QSplitter *splitter=new QSplitter;
    QPushButton *p1=new QPushButton("p1");
    QPushButton *p2=new QPushButton("p2");
    QPushButton *p3=new QPushButton("p3");
    QHBoxLayout  *l1=new QHBoxLayout;
 splitter->addWidget(p1);
 splitter->addWidget(p2);
 splitter->addWidget(p3);

 splitter->setOrientation(Qt::Vertical);
 l1->addWidget(splitter);
 window->setLayout(l1);
 setCentralWidget(window);
}

MainWindow::~MainWindow()
{
    delete ui;
}

