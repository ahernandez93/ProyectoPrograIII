#include <iostream>
#include <fstream>
#include <cstring>
#include "ListaEnlazada.h"
#include "clase.h"
#include "laboratorio.h"
using namespace std;

ListaEnlazada::ListaEnlazada()
{
    inicio = 0;
    fin = 0;
}

ListaEnlazada::~ListaEnlazada()
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
void ListaEnlazada::insertarAlInicio(Curso* nuevo)
{
    if(inicio == 0){
        inicio = nuevo;
        fin = nuevo;
   }
   else{
        nuevo->setSiguiente(inicio);
        inicio = nuevo;
   }
}

void ListaEnlazada::insertarAlFinal(Curso* nuevo)
{
   if(inicio == 0){
        inicio = nuevo;
        fin = nuevo;
   }
   else{
    fin->setSiguiente(nuevo);
    fin = nuevo;
   }
}

void ListaEnlazada::mostrarLista()
{
    Curso * temp = inicio;
    while(temp !=0){
        temp->imprimir();
        temp = temp->getSiguiente();
    }
}

Curso* ListaEnlazada::buscarCurso(int codigo)
{
    Curso * temp = inicio;
    while(temp !=0){
        if(codigo == temp->getCodigo())
            return temp;

        temp = temp->getSiguiente();
    }
    return 0;
}

void ListaEnlazada::guardarArchivoAleatorio()
{
    ofstream archivoSalida ("prueba.txt",ios::out|ios::binary);

    Curso *temp = inicio;
    while(temp !=0){
        archivoSalida.write(reinterpret_cast <const char *> (temp),sizeof(Curso));
        temp = temp->getSiguiente();
    }
    archivoSalida.close();
}

void ListaEnlazada::leerArchivoAleatorio()
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
        this->insertarAlFinal(curso);
        archivoEntrada.read(reinterpret_cast<char *> (curso), sizeof(Curso));
    }
    archivoEntrada.close();

}
