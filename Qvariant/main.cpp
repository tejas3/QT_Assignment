#include "mainwindow.h"

#include <QApplication>
#include<QVariant>
void test(QVariant value)
{
    qInfo()<<value;
    int test=0;
    bool ok=false;
    test=value.toInt(&ok);
    if(ok)
    {
        qInfo()<<"INT"<<test;
    }
    else
    {
        qInfo()<<"not a number";
    }
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
  //  w.show();
    QVariant v=12;
    QVariant v1="hello";
    test(v);
    test(v1);
    return a.exec();

}
