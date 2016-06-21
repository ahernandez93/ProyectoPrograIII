#include "curso.h"
#include <iostream>
#include <cstring>

using namespace std;

Curso::Curso()
{
    this->codigo = 0;
<<<<<<< HEAD
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
=======
    //this->nombre=new char[10];
    strcpy(this->nombre,"");
    this->matriculados = 0;
    //this->hora=new char[1];
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
>>>>>>> refs/remotes/origin/master
}

Curso::~Curso()
{
    cout<<"destructor curso"<<endl;
<<<<<<< HEAD
=======
    //delete[] this->nombre;
    //delete[] this->hora;

>>>>>>> refs/remotes/origin/master
}

void Curso::setCodigo(int codigo)
{
    this->codigo = codigo;
}

void Curso::setNombre(const char * nombre)
{
<<<<<<< HEAD
=======
    //delete [] this->nombre;
    //this->nombre = new char [strlen(nombre)+1];
>>>>>>> refs/remotes/origin/master
    strcpy(this->nombre,nombre);
}

void Curso::setMatriculados(int matriculados)
{
    this->matriculados = matriculados;
}

<<<<<<< HEAD
void Curso::setHora(char hora)
{
=======
void Curso::setHora(const char * hora)
{
    //delete [] this->hora;
    //this->hora= new char[strlen(hora)+1];
>>>>>>> refs/remotes/origin/master
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
<<<<<<< HEAD
char Curso::getHora() const
=======
const char* Curso::getHora() const
>>>>>>> refs/remotes/origin/master
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

<<<<<<< HEAD
void Curso::getCupo() const
{
    return 0;
}
=======
int Curso::getCupo() const
{
    return 0;
}

void Curso::imprimir() const
{
    cout << "Codigo: " << this->codigo << endl;
    cout << "Nombre: " << this->nombre << endl;
    cout << "Matriculados: " << this->matriculados << endl;
}
>>>>>>> refs/remotes/origin/master
