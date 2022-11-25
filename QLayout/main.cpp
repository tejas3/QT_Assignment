#include "mainwindow.h"

#include <QApplication>
#include<QPushButton>
#include<QHBoxLayout>
#include<QVBoxLayout>

int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    QWidget *window=new QWidget;
    QWidget *window2=new QWidget;
            window->setWindowTitle("layout");
            window2->setWindowTitle("layout2");

            QPushButton *p1=new QPushButton("p1");
    QPushButton *p2=new QPushButton("p2");
    QPushButton *p3=new QPushButton("p3");
    QPushButton *p4=new QPushButton("p4");
    QHBoxLayout *l=new QHBoxLayout;
    QVBoxLayout *l2=new QVBoxLayout;
    l->addWidget(p1);
    l->addWidget(p2);

l2->addWidget(p3);
l2->addWidget(p4);

    window->setLayout(l);
    window->show();
    window2->setLayout(l2);
window2->show();
    return a.exec();

}
