#include "calcdialog.h"
#include "ui_calcdialog.h"

calcDialog::calcDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::calcDialog)
{
    ui->setupUi(this);
}

calcDialog::~calcDialog()
{
    delete ui;
}
