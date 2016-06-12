#include "laboratorio.h"
#include <iostream>
#include <cstring>

using namespace std;

Laboratorio::Laboratorio() : Curso()
{
    this->numlaboratorio = 0;
    strcpy(this->instructor,"");
    this->dias = 0;
}

Laboratorio::Laboratorio(int codigo,const char * nombre, int matriculados,const char* hora, int numlaboratorio,const char * instructor, int dias) : Curso(codigo,nombre,matriculados,hora)
{
    this->numlaboratorio = numlaboratorio;
    strcpy(this->instructor,instructor);
    this->dias = dias;
}

Laboratorio::~Laboratorio()
{
    cout<<"destructor laboratorio"<<endl;
}

void Laboratorio::setNumLaboratorio(int numlaboratorio)
{
    this->numlaboratorio = numlaboratorio;
}

void Laboratorio::setInstructor(const char * instructor)
{
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
int Laboratorio::getCupo() const
{
    return 12;
}
