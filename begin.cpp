#include "begin.h"
#include "ui_begin.h"

begin::begin(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::begin)
{
    ui->setupUi(this);
}

begin::~begin()
{
    delete ui;
}

void begin::changeEvent(QEvent *e)
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
