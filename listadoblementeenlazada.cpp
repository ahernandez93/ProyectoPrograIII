#include "ListaDoblementeEnlazada.h"
#include <iostream>
#include <fstream>
#include <cstring>
#include "clase.h"
#include "laboratorio.h"
#include "curso.h"
using namespace std;
ListaDoblementeEnlazada::ListaDoblementeEnlazada()
{
    //ctor
    inicio=0;
    fin=0;

}

ListaDoblementeEnlazada::~ListaDoblementeEnlazada()
{
    //dtor
    cout<<"Detructor de lista"<<endl;

    Curso * temp = inicio;
    while(inicio != 0){
        inicio = temp->getSiguiente();
        delete temp;
        temp = inicio;
    }

}

void ListaDoblementeEnlazada::insertarAlInicio(Curso* nuevo)
{
    if(inicio == 0){
        inicio = nuevo;
        fin = nuevo;
   }
   else{
        nuevo->setSiguiente(inicio);
        inicio->setAnterior(nuevo);
        inicio = nuevo;
   }
}

void ListaDoblementeEnlazada::insertarAlFinal(Curso* nuevo)
{
    if(inicio == 0){
        inicio = nuevo;
        fin = nuevo;
   }
   else{
        //delete fin;
        fin->setSiguiente(nuevo);
        nuevo->setAnterior(fin);
        fin = nuevo;
   }
}

void ListaDoblementeEnlazada::agregar(Curso* nuevo)
{
    if(inicio == 0){
        inicio = nuevo;
        fin = nuevo;
   }
   else{
        fin->setSiguiente(nuevo);
        nuevo->setAnterior(fin);
        fin = nuevo;
   }
}

void ListaDoblementeEnlazada::mostrarLista()
{
    Curso * temp = inicio;
    while(temp !=0){
        temp->imprimir();
        temp = temp->getSiguiente();
    }
}

Curso* ListaDoblementeEnlazada::buscarCurso(int codigo)
{
    Curso * temp = inicio;
    while(temp !=0){
        if(codigo == temp->getCodigo())
            return temp;

        temp = temp->getSiguiente();
    }
    return 0;
}

void ListaDoblementeEnlazada::guardarArchivoAleatorio()
{
    ofstream archivoSalida ("prueba.txt",ios::out|ios::binary);

    Curso *temp = inicio;
    while(temp !=0){
        archivoSalida.write(reinterpret_cast <const char *> (temp),sizeof(Curso));
        temp = temp->getSiguiente();
    }
    archivoSalida.close();
}

void ListaDoblementeEnlazada::leerArchivoAleatorio()
{
    ifstream archivoEntrada ("prueba.txt",ios::in | ios::binary);
    if(!archivoEntrada)
    {
        cout<<"El archivo no existe."<<endl;
        return;
    }

    Curso * curso;

    archivoEntrada.read(reinterpret_cast<char *> (&curso), sizeof(Curso));

    while(archivoEntrada && !archivoEntrada.eof())
    {
        //curso->imprimir();
        //Clase curso2=(Clase)curso;
        curso->imprimir();
        //int codigo=curso->getCodigo();




        Curso * cursoptr=new Clase(curso->getCodigo(),curso->getNombre(),curso->getMatriculados(),curso->getHora(),((Clase *)curso)->getAula(),((Clase*)curso)->getCatedratico(),((Clase*)curso)->getDias());
        //cursoptr->imprimir();
        //this->insertarAlFinal(cursoptr);
        //delete cursoptr;

        archivoEntrada.read(reinterpret_cast<char *> (&curso), sizeof(Curso));

    }
    archivoEntrada.close();

}


