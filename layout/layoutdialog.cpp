#include "layoutdialog.h"
#include "ui_layoutdialog.h"

layoutDialog::layoutDialog(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::layoutDialog)
{
    ui->setupUi(this);

}

layoutDialog::~layoutDialog()
{
    delete ui;
}

