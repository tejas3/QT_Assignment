#include <QCoreApplication>
#include<QVariant>
#include<QDebug>

void fun(QVariant value)
{
    qDebug()<<value;
}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QVariant value1=10;
    QVariant value2="QVariant";

    fun(value1);
    fun(value2);

    return a.exec();
}
