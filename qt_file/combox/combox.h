#ifndef COMBOX_H
#define COMBOX_H

#include <QMainWindow>

#include <QDialog>
#include <QMessageBox>
QT_BEGIN_NAMESPACE
namespace Ui { class combox; }
QT_END_NAMESPACE

class combox : public QMainWindow
{
    Q_OBJECT

public:
    combox(QWidget *parent = nullptr);
    ~combox();

private slots:
        void on_pushButton_clicked();

private:
    Ui::combox *ui;
};
#endif // COMBOX_H
