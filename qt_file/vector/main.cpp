#include "mainwindow.h"

#include <QApplication>
#include <QVector>
#include <QDebug>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
   // MainWindow w;
  //  w.show();
    QVector<int> vec;
    vec.push_back(10);
     vec.push_back(12);
     vec.push_back(111);
     vec.push_back(999);

     for(int i=0;i<vec.size();i++)
     {
         qDebug() << vec[i];
     }

    return a.exec();
}
