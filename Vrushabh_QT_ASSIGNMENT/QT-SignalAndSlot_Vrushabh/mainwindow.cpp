#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->horizontalSlider,SIGNAL(valueChanged(int)),         //Ethe signal and slot dfine ny kela ani mainwindow.ui var signal solt ne widgets
            ui->progressBar,SLOT(setValue(int)));                   //connect kela tari chalt
}

MainWindow::~MainWindow()
{
    delete ui;
}

