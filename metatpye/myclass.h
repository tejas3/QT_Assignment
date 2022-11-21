#ifndef MYCLASS_H
#define MYCLASS_H

#include <QMainWindow>

class myclass : public QMainWindow
{
    Q_OBJECT

public:
   // myclass();
       QString mName;
    myclass(QWidget *parent = nullptr);
    ~myclass();
};

Q_DECLARE_METATYPE(myclass)
#endif // MYCLASS_H
