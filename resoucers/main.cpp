#include "resource.h"

#include <QApplication>
#include <QDebug>
#include <QFile>
#include <QString>
#include <QTextStream>

void read(QString filename)
{
    QFile file(filename);
    if(!file.open(QFile::ReadOnly | QFile::Text))
    {
        qDebug() << " Could not open the file for reading";
        return;
    }

    QTextStream in(&file);
    QString myText = in.readAll();

       qDebug() << myText;

    file.close();
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
   // resource w;
  //  w.show();
    read(":/new/prefix1/resoucers.pro");
    return a.exec();
}
