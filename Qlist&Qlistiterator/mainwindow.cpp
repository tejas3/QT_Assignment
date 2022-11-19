#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QList>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{

    QList<QString>list={"one","two","three"};
    QList<QString>list2;
    list2.push_back("hello");
    list2.push_back("sir");
    list.append(list2);
    QListIterator<QString>iterator(list);

    while(iterator.hasNext())
    {
        QString s=iterator.next();
        qDebug()<<s;
    }

    list.pop_back();
         QListIterator<QString>iterator2(list);
qDebug()<<"-----------------";
while(iterator2.hasNext())
{
    QString s=iterator2.next();
    qDebug()<<s;
}


}
