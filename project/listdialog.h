#pragma once
#ifndef LISTDIALOG_H
#define LISTDIALOG_H
#include"profiledialog.h"
#include"piedialog.h"
#include"calcdialog.h"
#include <QDialog>


namespace Ui {
class listDialog;
}

class listDialog : public QDialog
{
    Q_OBJECT

public:
    explicit listDialog(QWidget *parent = nullptr);
    ~listDialog();
private slots:
    void on_pushbutton_profile_clicked();
    void on_pushbutton_pie_clicked();
    void on_pushbutton_calc_clicked();

private:
    Ui::listDialog *ui;
    profileDialog *profiledialog;
    pieDialog *piedialog;
    calcDialog *calcdialog;
};

#endif // LISTDIALOG_H
