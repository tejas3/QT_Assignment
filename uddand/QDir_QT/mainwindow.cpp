#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDir>
#include<QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("QDir_QT");
    QDir dir;
    foreach (QFileInfo var, dir.drives()) {
        ui->comboBox->addItem(var.absoluteFilePath());
    }
    QDir dir_2("C:/Users/DTIOT0005/Documents/QDir_QT");
    foreach (QFileInfo var, dir_2.entryInfoList()) {
        ui->listWidget->addItem(var.absoluteFilePath());
    }

}

MainWindow::~MainWindow()
{
    delete ui;
}

