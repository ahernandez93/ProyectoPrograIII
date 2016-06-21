#include "clase.h"
#include <iostream>
#include <cstring>

using namespace std;

Clase::Clase() : Curso()
{
    this->aula = 0;
<<<<<<< HEAD
=======
    this->catedratico=new char[10];
>>>>>>> refs/remotes/origin/master
    strcpy(this->catedratico,"");
    this->dias = 0;
}

<<<<<<< HEAD
Clase::Clase(int codigo, char * nombre, int matriculados, char hora, int aula, char * catedratico, int dias) : Curso(codigo,nombre,matriculados,hora)
{
    this->aula = aula;
    strcpy(this->catedratico,catedratico);
    this->dias = dias;
}

virtual Clase::~Clase()
{
    cout<<"destructor clase"<<endl;
=======
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
>>>>>>> refs/remotes/origin/master
}

void Clase::setAula(int aula)
{
    this->aula = aula;
}

void Clase::setCatedratico(const char * catedratico)
{
<<<<<<< HEAD
=======
    delete[]this->catedratico;
    this->catedratico=new char[strlen(catedratico)+1];
>>>>>>> refs/remotes/origin/master
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
<<<<<<< HEAD
const char * Clase::getCatedrataico() const
=======
const char * Clase::getCatedratico() const
>>>>>>> refs/remotes/origin/master
{
    return this->catedratico;
}
int Clase::getDias() const
{
    return this->dias;
}
<<<<<<< HEAD
void Clase::getCupo() const
=======
int Clase::getCupo() const
>>>>>>> refs/remotes/origin/master
{
    return 30;
}
