#include <QCoreApplication>
#include<QSharedPointer>
#include<QDebug>

class abc
{
    int i;
public:
    abc(int d)
    {
        i=d;
        qDebug()<<i<<"  in constructor"<<endl;

    }
    ~abc()
    {
        qDebug()<<"in Destructor"<<endl;
    }
    void print()
    {
        qDebug()<<i<<endl;
    }
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QSharedPointer<abc> ptr( new abc(25));
    QSharedPointer<abc> ptr2(new abc(90));
    ptr2=ptr;
    ptr->print();
    ptr2->print();
    ptr.clear();
    ptr2.clear();
    return a.exec();
}
