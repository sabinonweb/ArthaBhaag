#include "profiledialog.h"
#include "ui_profiledialog.h"

profileDialog::profileDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::profileDialog)
{
    ui->setupUi(this);
}

profileDialog::~profileDialog()
{
    delete ui;
}
