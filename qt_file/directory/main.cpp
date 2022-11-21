#include "dir.h"

#include <QApplication>
#include <QDebug>
#include <QDir>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
 //   Dir w;
  //  w.show();


    QString path = "C:/he8v3/icon/creating_dir";

       QDir dir(path);
       if(!dir.exists())
       {
           qDebug() << "Creating " << path << "directory";
           dir.mkpath(path);
       }
       else
       {
           qDebug() << path << " already exists";
       }



    // forward slash for directory separator
    QDir dir1("C:/Qt");
    QDir dir2("C:/he8v3/icon");

    // output: true false
    qDebug() << dir1.exists() << dir2.exists();


    return a.exec();
}
