#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushbutton_login_clicked()
{
    QString username= ui-> lineEdit->text();
    QString password= ui-> lineEdit_2->text();
    if(username =="test" && password=="test")
    {

        hide();
        secdialog = new secDialog(this);
        secdialog ->show();
    }
    else
        QMessageBox::warning(this, "login","username and password is not correct");

}

