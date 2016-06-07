#include "clase.h"
#include <iostream>
#include <cstring>

using namespace std;

Clase::Clase() : Curso()
{
    this->aula = 0;
    strcpy(this->catedratico,"");
    this->dias = 0;
}

Clase::Clase(int codigo, char * nombre, int matriculados, char hora, int aula, char * catedratico, int dias) : Curso(codigo,nombre,matriculados,hora)
{
    this->aula = aula;
    strcpy(this->catedratico,catedratico);
    this->dias = dias;
}

virtual Clase::~Clase()
{
    cout<<"destructor clase"<<endl;
}

void Clase::setAula(int aula)
{
    this->aula = aula;
}

void Clase::setCatedratico(const char * catedratico)
{
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
const char * Clase::getCatedrataico() const
{
    return this->catedratico;
}
int Clase::getDias() const
{
    return this->dias;
}
void Clase::getCupo() const
{
    return 30;
}
