#include "test.h"

test::test(QObject *parent) : QObject(parent)
{

}

void test::functionality()
{
    qDebug()<<"functionality function"<<endl;
    emit close();

}
