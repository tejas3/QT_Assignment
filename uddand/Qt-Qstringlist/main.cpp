#include <QCoreApplication>
#include<QStringList>
//#include <QMutableStringListIterator>
#include<QDebug>


int main(int argc, char *argv[])

{
    QCoreApplication a(argc, argv);
     QStringList list;
     QString line="a,b,c,d";
     list=line.split(",");
     list.replaceInStrings("a","apple");  //string replace
     list.replaceInStrings("b","ball");//string replace
     list.replaceInStrings("c","cat");//string replace
     list.replaceInStrings("d","danger");//string replace

     qDebug()<<list;
    return a.exec();
}
