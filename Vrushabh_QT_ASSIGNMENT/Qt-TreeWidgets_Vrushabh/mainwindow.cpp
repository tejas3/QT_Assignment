#include "mainwindow.h"
#include "ui_mainwindow.h"
//#include<QTreeWidget>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->treeWidget->setColumnCount(2);
    AddRoot("Name","List");
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::AddRoot(QString name,QString Description)
{
      QTreeWidgetItem *item=new QTreeWidgetItem(ui->treeWidget);
      item->setText(0,name);
      item->setText(1,Description);
      ui->treeWidget->addTopLevelItem(item);

      AddChild(item,"one","Hello");
      AddChild(item,"two","world");
}
void MainWindow::AddChild(QTreeWidgetItem *parent,QString name,QString Description)
{
    QTreeWidgetItem *item=new QTreeWidgetItem();
    item->setText(0,name);
    item->setText(1,Description);
    parent->addChild(item);
}
