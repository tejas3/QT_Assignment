#include <QCoreApplication>
#include<QStringList>
#include<QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
     QStringList list;
     QString line="a,b,c,d,e,f,g";
     list=line.split(",");
     list.replaceInStrings("b","bomb");  //string replace
     qDebug()<<list;
    return a.exec();
}
