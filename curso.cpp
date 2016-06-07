#include "curso.h"
#include <iostream>
#include <cstring>

using namespace std;

Curso::Curso()
{
    this->codigo = 0;
    strcpy(this->nombre,"");
    this->matriculados = 0;
    strcpy(this->hora,"");
}
Curso::Curso(int codigo, char * nombre, int matriculados, char hora)
{
    this->codigo = codigo;
    strcpy(this->nombre,nombre);
    this->matriculados = matriculados;
    strcpy(this->hora,hora);
}

Curso::~Curso()
{
    cout<<"destructor curso"<<endl;
}

void Curso::setCodigo(int codigo)
{
    this->codigo = codigo;
}

void Curso::setNombre(const char * nombre)
{
    strcpy(this->nombre,nombre);
}

void Curso::setMatriculados(int matriculados)
{
    this->matriculados = matriculados;
}

void Curso::setHora(char hora)
{
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
char Curso::getHora() const
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

void Curso::getCupo() const
{
    return 0;
}
