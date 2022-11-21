#include "mainwindow.h"

#include <QApplication>
#include<QVariant>
#include<QDebug>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QVariant v= 1325.521;



    qDebug()<<v.toInt() <<endl;
    qDebug()<<v.toString()<<endl;
    qDebug()<<v.toDouble()<<endl;
    MainWindow w;
    w.show();
    return a.exec();
}
