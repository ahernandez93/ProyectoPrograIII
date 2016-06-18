#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "curso.h"
#include "clase.h"
#include "laboratorio.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    /*Curso * curso1 = new Clase(1,"Programacion III",15,"1pm",501,"Allan Villatoro",12345);
    QMessageBox::information(this,tr("Prueba"),tr(((Clase *)curso1)->getCatedratico()));
    delete curso1;*/

    Curso * curso1 = new Laboratorio(1,"Programacion III",15,"1pm",501,"Allan Villatoro",6);
    QMessageBox::information(this,tr("Prueba"),tr(((Laboratorio *)curso1)->getInstructor()));
    delete curso1;
}
