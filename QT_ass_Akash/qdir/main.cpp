#include <QCoreApplication>
#include<QDir>
#include<QDebug>
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QDir *dir=new QDir;
    QString mpath="/home/dtiot08/DEL-ES1297/dirfiles";

    if(!dir->exists(mpath))
    {
        dir->mkpath(mpath);
        qDebug()<<"path created"<<endl;
    }
    else
        qDebug()<<"path already exist"<<endl;

    return a.exec();
}
