#include "mainwindow.h"
#include "ui_mainwindow.h"

void MainWindow::addparent(QString Name , QString Description)
{
    QTreeWidgetItem *item=new QTreeWidgetItem(ui->treeWidget);
    item->setText(0, Name);
    item->setText(1,Description);
    ui->treeWidget->addTopLevelItem(item);
    addchild(item,"one","two");
    addchild(item,"three","four");
}

void MainWindow::addchild(QTreeWidgetItem *parent, QString name , QString description)
{
    QTreeWidgetItem *item=new QTreeWidgetItem();
    item->setText(0, name);
    item->setText(1,description);
    parent->addChild(item);
}

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->treeWidget->setColumnCount(2);
    addparent("hello","world");
    addparent("hello 1","world");
    addparent("hello 2","world");

}

MainWindow::~MainWindow()
{
    delete ui;
}

