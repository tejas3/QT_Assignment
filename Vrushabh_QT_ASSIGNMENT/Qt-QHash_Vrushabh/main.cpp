#include <QCoreApplication>
#include<QHash>
#include<QDebug>
#include<QString>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
   QHash<int,QString> v;
    v.insert(1,"C");
    v.insert(2,"Cpp");
    v.insert(3,"Cpp11");


    foreach (int i, v.keys()) {
         qDebug()<<v[i];
    }
    QHashIterator<int,QString>Iter(v);
    while (Iter.hasNext()) {
        Iter.next();
        qDebug()<<Iter.key()<<" "<<Iter.value();
    }

    return a.exec();
}
