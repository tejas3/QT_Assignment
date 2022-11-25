#include <QCoreApplication>
#include<QMap>
#include<QDebug>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QMap<int,QString> v;
    v.insert(1,"C");
    v.insert(2,"Cpp");
    v.insert(3,"Cpp11");
    v.insertMulti(1,"Cpp11");


    foreach (int i, v.keys()) {
         qDebug()<<v[i];
    }
    QMapIterator<int,QString>Iter(v);
    while (Iter.hasNext()) {
        Iter.next();
        qDebug()<<Iter.key()<<" "<<Iter.value();
    }
    return a.exec();
}
