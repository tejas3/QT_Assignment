#ifndef PAINTER_H
#define PAINTER_H

#include <QMainWindow>
#include <QDialog>
#include <QPainter>
QT_BEGIN_NAMESPACE
namespace Ui { class painter; }
QT_END_NAMESPACE

class painter : public QMainWindow
{
    Q_OBJECT

public:
    painter(QWidget *parent = nullptr);
    ~painter();

private:
    Ui::painter *ui;


protected:
     void paintEvent(QPaintEvent *e);
    //  void paintEvent1(QPaintEvent *e);

};
#endif // PAINTER_H
