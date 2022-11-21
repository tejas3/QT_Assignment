#include "file.h"

#include <QApplication>
#include <QFile>
#include <QDebug>
#include <QString>
#include <QTextStream>

void write(QString filename)
{
    QFile file(filename);
    // Trying to open in WriteOnly and Text mode
    if(!file.open(QFile::WriteOnly | QFile::Text))
    {
        qDebug() << " Could not open file for writing";
        return;
    }

    QTextStream out(&file);
    out << "QFile : iinformation into file we are reding "
           "using read function";

    file.flush();
    file.close();
}



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
   // FIle w;
   // w.show();
    QString filename = "C:/he8v3/icon/creating_dir/file.txt";
        write(filename);
        read(filename);

    return a.exec();
}
