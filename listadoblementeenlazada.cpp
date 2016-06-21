#include "ListaDoblementeEnlazada.h"
#include <iostream>
#include <fstream>
#include <cstring>
#include "clase.h"
#include "laboratorio.h"
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
        delete fin;
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

    Curso *curso;

    archivoEntrada.read(reinterpret_cast<char *> (curso), sizeof(Curso));

    while(archivoEntrada && !archivoEntrada.eof())
    {
        //curso->setSiguiente(NULL);
        //curso->setAnterior(NULL);


        this->insertarAlFinal(curso);
        //curso->imprimir();
        //delete curso;
        archivoEntrada.read(reinterpret_cast<char *> (curso), sizeof(Curso));



    }
    //archivoEntrada.close();

}


