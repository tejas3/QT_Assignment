#include "resource.h"
#include "ui_resource.h"

resource::resource(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::resource)
{
    ui->setupUi(this);
}

resource::~resource()
{
    delete ui;
}

