#include "mainwindow.h"

#include <QApplication>
#include<QSharedPointer>
class A
{
    QString value;
public:A(QString value)
    {
        this->value=value;
        qDebug()<<"constructed";
    }
    ~A()
    {
        qDebug()<<"destructed";
    }
    void display()
    {
        qInfo()<<value;
    }
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

 QSharedPointer<A>p(new A("hello"));
 QSharedPointer<A>p2=p;

 p->display();

 p2->display();
 p.clear();
 p2.clear();
 qDebug()<<p.isNull();
 qDebug()<<p2.isNull();



    return a.exec();
}


