#ifndef MESSAGEBOX_H
#define MESSAGEBOX_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class messageBox; }
QT_END_NAMESPACE

class messageBox : public QMainWindow
{
    Q_OBJECT

public:
    messageBox(QWidget *parent = nullptr);
    ~messageBox();

private slots:
    void on_pushButton_clicked();

private:
    Ui::messageBox *ui;
};
#endif // MESSAGEBOX_H
