#include <QCoreApplication>
#include<QFile>
#include<QTextStream>
#include<QDebug>
    void readf(QString filename )
    {
        QFile file(filename);
        file.open(QFile::ReadOnly );
        QTextStream out(&file);
        while(!out.atEnd())
        {
            qDebug()<<out.readLine();
        }
        file.close();
    }
    void writef(QString str)
    {

        QFile file("newfileapp.txt");
        file.open(QFile::ReadOnly|QFile::Append );
        QTextStream in(&file);
        in<<str<<endl;
        file.close();
    }
int main(int argc, char *argv[])
{   QString str;
    QCoreApplication a(argc, argv);
    for(int i=0;i<7;i++)
    {
     str= QString::number(i);
    writef(str);
    }
    readf(":/new/prefix1/main.cpp");
    return a.exec();
}
