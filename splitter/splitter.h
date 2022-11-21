#ifndef SPLITTER_H
#define SPLITTER_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Splitter; }
QT_END_NAMESPACE

class Splitter : public QMainWindow
{
    Q_OBJECT

public:
    Splitter(QWidget *parent = nullptr);
    ~Splitter();

private:
    Ui::Splitter *ui;
};
#endif // SPLITTER_H
