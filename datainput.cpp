#include "datainput.h"
#include "ui_datainput.h"

DataInput::DataInput(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DataInput)
{
    ui->setupUi(this);
}

DataInput::~DataInput()
{
    delete ui;
}

void DataInput::changeEvent(QEvent *e)
{
    QWidget::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}
