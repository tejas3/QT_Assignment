#include <QCoreApplication>
#include<QDebug>
#include<QPointer>
class abc:public QObject
{
public:
    abc(int a)
    {

        qDebug()<<"constructor"<<endl;
    }

    ~abc()
    {
        qDebug()<<"destructor"<<endl;
    }
    void print()
    {
                qDebug()<<"print function "<<endl;
    }
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    abc *p=new abc(20);
    p->print();

    QPointer<abc> pabc=new abc(10);

    pabc->print();
    //delete p;
  //  delete pabc;
    pabc.clear();
      qDebug()<<pabc.isNull();

    return a.exec();
}
