#include <QCoreApplication>
#include<QScopedPointer>
#include <QDebug>

int *Base()
{
    QScopedPointer<int> i(new int(22));
    qDebug()<<*i;
    return i.take();
}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QScopedPointer<int>z(Base());
    qDebug()<<*z;
    return a.exec();
}
