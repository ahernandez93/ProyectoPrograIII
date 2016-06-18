#include "curso.h"
#include <iostream>
#include <cstring>

using namespace std;

Curso::Curso()
{
    this->codigo = 0;
    this->nombre=new char[10];
    strcpy(this->nombre,"");
    this->matriculados = 0;
    this->hora=new char[1];
    strcpy(this->hora,"");
    siguiente = 0;
    anterior = 0;
}
Curso::Curso(int codigo,const char * nombre, int matriculados, const char * hora)
{
    this->setCodigo(codigo);
    this->setNombre(nombre);
    this->setMatriculados(matriculados);
    this->setHora(hora);
    siguiente = 0;
    anterior = 0;
}

Curso::~Curso()
{
    cout<<"destructor curso"<<endl;
    delete[] this->nombre;
    delete[] this->hora;

}

void Curso::setCodigo(int codigo)
{
    this->codigo = codigo;
}

void Curso::setNombre(const char * nombre)
{
    delete [] this->nombre;
    this->nombre = new char [strlen(nombre)+1];
    strcpy(this->nombre,nombre);
}

void Curso::setMatriculados(int matriculados)
{
    this->matriculados = matriculados;
}

void Curso::setHora(const char * hora)
{
    delete [] this->hora;
    this->hora= new char[strlen(hora)+1];
    strcpy(this->hora,hora);
}

int Curso::getCodigo() const
{
    return this->codigo;
}
const char * Curso::getNombre() const
{
    return this->nombre;
}
int Curso::getMatriculados() const
{
    return this->matriculados;
}
const char* Curso::getHora() const
{
    return this->hora;
}

void Curso::setSiguiente(Curso * nuevo)
{
    this->siguiente = nuevo;
}

Curso * Curso::getSiguiente()
{
    return siguiente;
}

void Curso::setAnterior(Curso * nuevo)
{
    this->anterior = nuevo;
}

Curso * Curso::getAnterior()
{
    return anterior;
}

int Curso::getCupo() const
{
    return 0;
}
