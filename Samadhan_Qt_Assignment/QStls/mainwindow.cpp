#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //Vector
    QVector<QString> vector;
    vector << "alpha" << "beta" << "delta";
    qDebug() << "vector : " << vector << endl;
    vector.insert(2, "gamma");
    qDebug() << "Add : " << vector << endl;
    vector.fill("Hii", 4);
    qDebug() << "fill : " << vector << endl;


    //List
    QList<QString> list = { "one", "two", "three" };
    qDebug() << "list : " << list << endl;
    list.append("last");
    qDebug() << "Append : " << list << endl;
    list.removeOne("two");
    qDebug() << "remove : " << list << endl;

    //list iterator
    QList<int> ls;
    for (int i=0; i<=9; i++){
        ls.append(i);
    }
    QListIterator<int> Itr(ls);
    while (Itr.hasNext()) {
        qDebug() << "List Iterator : " << Itr.next();
    }

    //Map
    QMap<int, QString> m;
    m.insert(1,"one");
    m.insert(2,"two");
    m.insert(3,"three");

    QMapIterator<int, QString> Itrm(m);
    while (Itrm.hasNext()) {
        Itrm.next();
        qDebug() << Itrm.key() << "-" << Itrm.value();
    }

    //QHash
     QHash<QString, int> hash;
     hash["one"] = 1;
     hash["three"] = 3;
     hash["seven"] = 7;
     qDebug() << "hash : " << hash << endl;
     hash.insert("twelve", 12);
     qDebug() << "insert : " << hash << endl;

     //QStringList
    QStringList strl;
    QString str = "a,b,c,d,e";
    strl = str.split(",");
    qDebug() << "QStringList : " << strl << endl;
    strl.replaceInStrings("b", "BlackPerl");
    qDebug() << strl << endl;

}

MainWindow::~MainWindow()
{
    delete ui;
}
