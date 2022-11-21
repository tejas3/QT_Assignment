#include "mainwindow.h"

#include <QApplication>
#include<QPushButton>
#include<QHBoxLayout>
#include<QVBoxLayout>
#include<QWidget>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QWidget *window= new QWidget();
    window->setWindowTitle("layout app");
    QPushButton *but1= new QPushButton("one");
    QPushButton *but2= new QPushButton("two");
    QPushButton *but3= new QPushButton("three");

   // QHBoxLayout *h=new QHBoxLayout;
    QVBoxLayout *v=new QVBoxLayout;
    v->addWidget(but1);
    v->addWidget(but2);
    v->addWidget(but3);

    window->setLayout(v);
    window->show();
    return a.exec();
}
