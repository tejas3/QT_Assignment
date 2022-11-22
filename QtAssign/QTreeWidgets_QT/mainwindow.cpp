#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtCore>
#include <QtGui>
#include <QTreeWidget>



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->treeWidget->setColumnCount(5);
    AddRoot("Uddand","DEL-ES1246","Delta","IOT");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow :: AddRoot(QString name,QString id,QString Company,QString Role)
{
   QTreeWidgetItem *itm = new QTreeWidgetItem(ui->treeWidget);
   itm->setText(0,name);
   itm->setText(1,id);
   itm->setText(2,Company);
   itm->setText(3,Role);
   ui->treeWidget->addTopLevelItem(itm);
}
void MainWindow :: AddChild(QTreeWidgetItem *parent,QString name,QString Description)
{
QTreeWidgetItem *itm = new QTreeWidgetItem(ui->treeWidget);
itm->setText(0,name);
itm->setText(1,Description);
parent->addChild(itm);
}
