#include <QCoreApplication>
#include<QVector>
#include<QDebug>
#include <iostream>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QVector<int>vector;
//    printf("intial vector :%d");
    vector.push_back(1);
    vector.push_back(2);
    vector.push_back(3);
    vector.push_back(4);
    vector.pop_back();
    QVector<int>::Iterator ptr;
    for(ptr=vector.begin();ptr!=vector.end();ptr++)
        qDebug()<<*ptr;
    return a.exec();
}
