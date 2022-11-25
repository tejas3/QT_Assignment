#include <QCoreApplication>
#include<QVector>
#include<QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QVector<int>v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    QVector<int>::Iterator ptr;
    for(ptr=v.begin();ptr!=v.end();ptr++)
        qDebug()<<*ptr;
    return a.exec();
}
