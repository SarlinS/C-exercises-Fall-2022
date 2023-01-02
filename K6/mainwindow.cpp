#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    laskuri = 0;
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_countNappi_clicked()
{
    laskuri++;
    ui->ikkuna->setText(QString::number(laskuri));
}


void MainWindow::on_resetNappi_clicked()
{
    laskuri = 0;
    ui->ikkuna->setText(QString::number(laskuri));
}

