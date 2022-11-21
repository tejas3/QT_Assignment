#ifndef MAP_H
#define MAP_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class map; }
QT_END_NAMESPACE

class map : public QMainWindow
{
    Q_OBJECT

public:
    map(QWidget *parent = nullptr);
    ~map();

private:
    Ui::map *ui;
};
#endif // MAP_H
