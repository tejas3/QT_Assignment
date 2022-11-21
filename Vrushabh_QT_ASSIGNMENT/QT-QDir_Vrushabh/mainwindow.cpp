#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDir>
#include <QComboBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QDir dir;
    foreach (QFileInfo var, dir.drives()) {
        ui->comboBox->addItem(var.absoluteFilePath());
    }
    QDir dir1("C:/Users/Vrushabh/Documents/QT-QDir");
    foreach (QFileInfo var, dir1.entryInfoList()) {
        ui->listWidget->addItem("Dir: " + var.absoluteFilePath());


    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

