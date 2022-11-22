#include <QCoreApplication>
#include<QList>
#include<QDebug>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QList<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.pop_front();
    l.pop_front();
    QList<int>::iterator ptr;
    for(ptr=l.begin();ptr!=l.end();ptr++)
        qDebug()<<*ptr;
    return a.exec();
}
