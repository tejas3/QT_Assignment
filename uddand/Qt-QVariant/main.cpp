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
    QVariant data1="10";
    QVariant data2="QVariant";
    QVariant data3='A';

    fun(data1);
    fun(data2);
    fun(data3);

    return a.exec();
}
