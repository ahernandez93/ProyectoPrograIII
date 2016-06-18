#include "clase.h"
#include <iostream>
#include <cstring>

using namespace std;

Clase::Clase() : Curso()
{
    this->aula = 0;
    this->catedratico=new char[10];
    strcpy(this->catedratico,"");
    this->dias = 0;
}

Clase::Clase(int codigo, const char * nombre, int matriculados, const char* hora, int aula, const char * catedratico, int dias) : Curso(codigo,nombre,matriculados,hora)
{
    this->setAula(aula);
    this->setCatedratico(catedratico);
    this->setDias(dias);
}

Clase::~Clase()
{
    cout<<"destructor clase"<<endl;
    delete [] catedratico;
}

void Clase::setAula(int aula)
{
    this->aula = aula;
}

void Clase::setCatedratico(const char * catedratico)
{
    delete[]this->catedratico;
    this->catedratico=new char[strlen(catedratico)+1];
    strcpy(this->catedratico,catedratico);
}

void Clase::setDias(int dias)
{
    this->dias = dias;
}

int Clase::getAula() const
{
    return this->aula;
}
const char * Clase::getCatedratico() const
{
    return this->catedratico;
}
int Clase::getDias() const
{
    return this->dias;
}
int Clase::getCupo() const
{
    return 30;
}
