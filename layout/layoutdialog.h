#ifndef LAYOUTDIALOG_H
#define LAYOUTDIALOG_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class layoutDialog; }
QT_END_NAMESPACE

class layoutDialog : public QMainWindow
{
    Q_OBJECT

public:
    layoutDialog(QWidget *parent = nullptr);
    ~layoutDialog();

private:
    Ui::layoutDialog *ui;
};
#endif // LAYOUTDIALOG_H
