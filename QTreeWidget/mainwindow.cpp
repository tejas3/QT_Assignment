#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QVector>
#include<QListWidget>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(pushButton_clicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::pushButton_clicked()
{
    QString name="vikas";
    QString age="24";
 ui->treeWidget->setColumnCount(2);
ui->treeWidget->rootIndex();
  QTreeWidgetItem *widget=new QTreeWidgetItem(ui->treeWidget);
  widget->setText(0,name);
  widget->setText(1,age);
  root(widget,"akash","24");

  ui->treeWidget->addTopLevelItem(widget);
}

void MainWindow::root(QTreeWidgetItem *, QString name, QString age)
{
    QTreeWidgetItem *widget=new QTreeWidgetItem(ui->treeWidget);
    widget->setText(0,name);
   widget->setText(1,age);

    ui->treeWidget->addTopLevelItem(widget);
}
