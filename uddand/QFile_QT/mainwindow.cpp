#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("QFile_QT");
}

MainWindow::~MainWindow()
{
    delete ui;
}




void MainWindow::on_WRite_button_clicked()
{
    QFile data("C:/Users/DTIOT0005/Documents/QFile_QT/Uddand.txt");
    if(! data.open(QFile::ReadOnly | QFile::Text )) {
        QMessageBox::warning(this,"title","File Not available ");
    }
    QTextStream in(&data);
    QString text=in.readAll();
    ui->plainTextEdit->setPlainText(text);
    in<<text;
    data.close();
}


void MainWindow::on_Read_button_clicked()
{
    QFile data("C:/Users/DTIOT0005/Documents/QFile_QT/Uddand.txt");
    if(! data.open(QFile::WriteOnly | QFile::Text)) {
        QMessageBox::warning(this,"title","File Not available ");
    }
    QTextStream out(&data);
    QString text=ui->plainTextEdit->toPlainText();
    out<<text;
    data.flush();
    data.close();
}

