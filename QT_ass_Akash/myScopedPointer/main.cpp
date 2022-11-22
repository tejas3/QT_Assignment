#include <QCoreApplication>
#include <QDebug>
#include<QScopedPointer>
int *test()
{/*
    int *i= new int(10);
    qDebug()<<*i<<endl;*/
    QScopedPointer<int> i(new int (20));
    qDebug()<<*i;


    return i.take();
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
//    int *z=test();
    QScopedPointer<int> z(test());

    qDebug()<<*z<<endl;
    return a.exec();

}
