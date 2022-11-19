#include "mainwindow.h"
#include<QLabel>
#include<QLineEdit>
#include <QApplication>
#include<QPushButton>
#include<QGridLayout>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
     QWidget *window=new QWidget;
     window->setWindowTitle("layout");
     QGridLayout *l=new QGridLayout;

    QLabel *p1=new QLabel("name");
    QLineEdit *p2=new QLineEdit;
    QLabel *p3=new QLabel("age");
 QLineEdit *p4=new QLineEdit;

       l->addWidget(p1,0,0);
       l->addWidget(p2,0,1);
       l->addWidget(p3,1,0);
       l->addWidget(p4,1,1);

         window->setLayout(l);
         window->show();
    return a.exec();
}
