#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

int MainWindow:: Funcion(){
    return 10;
}
double MainWindow:: Funcion2(){
    return 20;
}

MainWindow::~MainWindow()
{
    delete ui;
}
