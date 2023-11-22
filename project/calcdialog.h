#pragma once
#ifndef CALCDIALOG_H
#define CALCDIALOG_H

#include <QDialog>

namespace Ui {
class calcDialog;
}

class calcDialog : public QDialog
{
    Q_OBJECT

public:
    explicit calcDialog(QWidget *parent = nullptr);
    ~calcDialog();

private:
    Ui::calcDialog *ui;
};

#endif // CALCDIALOG_H
