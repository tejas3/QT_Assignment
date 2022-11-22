#ifndef TEST_H
#define TEST_H

#include <QObject>
#include <QDebug>
class test : public QObject
{
    Q_OBJECT
public:
    explicit test(QObject *parent = nullptr);

signals:
    void close();
private slots:
    void functionality();

};

#endif // TEST_H
