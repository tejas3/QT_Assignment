#include "scopepointer.h"

#include <QApplication>
#include <QDebug>
#include <QScopedPointer>
int *test()
{
//    int * i=new int(22);
//    qDebug()<<*i;
//    return i;

    QScopedPointer<int>i(new int(2));
     qDebug()<<*i;
//return i.data(); address return
     return i.take();   //retun value

}


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
   // scopepointer w;
//w.show();

    //    int * z=test();
    //    qDebug()<<*z;

    QScopedPointer<int>z(test());

    qDebug()<<*z;

    return a.exec();
}
