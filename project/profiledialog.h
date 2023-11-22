#pragma once
#ifndef PROFILEDIALOG_H
#define PROFILEDIALOG_H

#include <QDialog>

namespace Ui {
class profileDialog;
}

class profileDialog : public QDialog
{
    Q_OBJECT

public:
    explicit profileDialog(QWidget *parent = nullptr);
    ~profileDialog();

private:
    Ui::profileDialog *ui;
};

#endif // PROFILEDIALOG_H
