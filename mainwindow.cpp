
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QPixmap"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap welcome(":/img/img/welcome.jpeg");
    int w = ui->label_welcome->width();
    int h = ui->label_welcome->height();
    ui->label_welcome->setPixmap(welcome.scaled(w, h, Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}


