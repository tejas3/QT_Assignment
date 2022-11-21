#ifndef RESOURCE_H
#define RESOURCE_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class resource; }
QT_END_NAMESPACE

class resource : public QMainWindow
{
    Q_OBJECT

public:
    resource(QWidget *parent = nullptr);
    ~resource();

private:
    Ui::resource *ui;
};
#endif // RESOURCE_H
