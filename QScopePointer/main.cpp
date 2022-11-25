#include <QCoreApplication>
#include<QScopedPointer>
using namespace std;
class A
{
    int a;
public:
    A(int a)
    {
    this->a=a;
    }
    void display()
    {
        qDebug()<<a;
    }
};
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
 QScopedPointer<A>ptr(new A(12));
 ptr->display();

return a.exec();
}

