#include <QCoreApplication>
#include<QScopedPointer>
#include <QDebug>

int *Base()
{
    //int*i=10;
    QScopedPointer<int>i(new int(10));
    qDebug()<<*i;
    return i.take();
     QScopedPointer<int>j(new int(100));
     qDebug()<<*i;
     return j.take();


}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QScopedPointer<int>z(Base());
     QScopedPointer<int>y(Base());
    qDebug()<<*z;
    qDebug()<<*y;

    return a.exec();
}
