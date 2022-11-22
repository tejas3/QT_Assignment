#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QPushButton>
#include<QWidget>
#include<QHBoxLayout>
#include<QVBoxLayout>
#include<QSplitter>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QWidget *widget= new QWidget;

    QSplitter *split= new QSplitter;

    QPushButton *pb1 =new QPushButton ("PB 1");
    QPushButton *pb2 =new QPushButton ("PB 2");
    QPushButton *pb3 =new QPushButton ("PB 3");

    split->addWidget(pb1);
    split->addWidget(pb2);
    split-> addWidget(pb3);

   // QHBoxLayout *hlayout= new QHBoxLayout();
    QVBoxLayout *vlayout = new QVBoxLayout();

    split->setOrientation(Qt::Vertical);

    vlayout->addWidget(split);
    widget->setLayout(vlayout);

    setCentralWidget(widget);
}

MainWindow::~MainWindow()
{
    delete ui;
}

