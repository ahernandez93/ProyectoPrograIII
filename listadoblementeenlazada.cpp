#include "ListaDoblementeEnlazada.h"

ListaDoblementeEnlazada::ListaDoblementeEnlazada()
{
    //ctor
}

ListaDoblementeEnlazada::~ListaDoblementeEnlazada()
{
    //dtor
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
        fin->setSiguiente(nuevo);
        nuevo->setAnterior(fin);
        fin = nuevo;
   }
}
