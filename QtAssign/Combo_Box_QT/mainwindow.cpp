#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QStringList>
#include <QComboBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QStringList list_items;
    list_items<< "Red" <<"blue" <<"green" << "black" ;
    //ui->comboBox->addItems(list_items);
    // Display items in label
    for(int i=0; i<list_items.size();i++)
    {
        ui->comboBox->addItem(QIcon("C:/Users/DTIOT0005/Documents/Combo_Box_QT/color.png"),list_items.at(i));
    }

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_comboBox_currentTextChanged(const QString &arg1)
{
    ui->label->setText(arg1);
}


void MainWindow::on_pushButton_clicked()
{
    ui->comboBox->removeItem(ui->comboBox->currentIndex());
}

