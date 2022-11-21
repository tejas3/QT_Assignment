#include <QCoreApplication>
#include <QCoreApplication>
#include<QPointer>
#include<QWeakPointer>
class A:public QObject
{
    QString value;
public:A(QString value)
    {
        this->value=value;
        qDebug()<<"constructed"<<value;
    }
    ~A()
    {
        qDebug()<<"destructed";
    }
};

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
  QPointer<A>p=new A("hello");
     delete p;
    return a.exec();
}
