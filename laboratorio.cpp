#include "laboratorio.h"
#include <iostream>
#include <cstring>

using namespace std;

Laboratorio::Laboratorio() : Curso()
{
    this->numlaboratorio = 0;
<<<<<<< HEAD
=======
    this->instructor=new char [1];
>>>>>>> refs/remotes/origin/master
    strcpy(this->instructor,"");
    this->dias = 0;
}

<<<<<<< HEAD
Laboratorio::Laboratorio(int codigo, char * nombre, int matriculados, char hora, int numlaboratorio, char * instructor, int dias) : Curso(codigo,nombre,matriculados,hora)
{
    this->numlaboratorio = numlaboratorio;
    strcpy(this->instructor,instructor);
    this->dias = dias;
}

virtual Laboratorio::~Laboratorio()
{
    cout<<"destructor laboratorio"<<endl;
=======
Laboratorio::Laboratorio(int codigo,const char * nombre, int matriculados,const char* hora, int numlaboratorio,const char * instructor, int dias) : Curso(codigo,nombre,matriculados,hora)
{
    this->numlaboratorio = numlaboratorio;
    this->setInstructor(instructor);
    this->dias = dias;
}

Laboratorio::~Laboratorio()
{
    cout<<"destructor laboratorio"<<endl;
    delete [] this->instructor;
>>>>>>> refs/remotes/origin/master
}

void Laboratorio::setNumLaboratorio(int numlaboratorio)
{
    this->numlaboratorio = numlaboratorio;
}

void Laboratorio::setInstructor(const char * instructor)
{
<<<<<<< HEAD
=======
    delete [] this->instructor;
    this->instructor=new char [strlen(instructor)+1];
>>>>>>> refs/remotes/origin/master
    strcpy(this->instructor,instructor);
}

void Laboratorio::setDias(int dias)
{
    this->dias = dias;
}

int Laboratorio::getNumLaboratorio() const
{
    return this->numlaboratorio;
}
const char * Laboratorio::getInstructor() const
{
    return this->instructor;
}
int Laboratorio::getDias() const
{
    return this->dias;
}
<<<<<<< HEAD
void Laboratorio::getCupo() const
=======
int Laboratorio::getCupo() const
>>>>>>> refs/remotes/origin/master
{
    return 12;
}
