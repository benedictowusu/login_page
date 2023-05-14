#include "login.h"
#include "ui_login.h"
#include "QMessageBox"

login::login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
}

login::~login()
{
    delete ui;
}

void login::on_pushButton_clicked()
{
    QString username = ui->lineEdit_username->text();
    QString password = ui->lineEdit_password->text();

    if (username == "test" && password == "test1"){
        hide();
        mainwindow = new MainWindow(this);
        mainwindow->show();
    }
    else {
        QMessageBox::warning(this, "login", "Incorrect username or password");
    }
}

