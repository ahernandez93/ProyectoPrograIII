#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "curso.h"
#include "clase.h"
#include <iostream>
#include "laboratorio.h"
#include "listadoblementeenlazada.h"
#include "listaenlazada.h"
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
    //Curso * curso1 = new Clase(1,"Programacion III",15,"1pm",501,"Allan Villatoro",12345);

    Curso * curso2 = new Curso(2,"Programacion IV",13,"2pm");

    Curso * curso3 = new Curso(3,"Programacion V",10,"2pm");

        ListaDoblementeEnlazada * lista = new ListaDoblementeEnlazada();
        //lista->insertarAlFinal(curso1);
        /*lista->insertarAlFinal(curso2);
        lista->insertarAlFinal(curso3);*/

        lista->leerArchivoAleatorio();
        lista->mostrarLista();

        //lista->guardarArchivoAleatorio();

        //delete curso1;
        delete curso2;
        delete curso3;
        delete lista;

}
