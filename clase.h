#ifndef CLASE_H
#define CLASE_H
#include "curso.h"


class Clase : public Curso
{
public:
    Clase();
    Clase(int, char *, int, char, int, char *, int);
    virtual ~Clase();
    void setAula(int);
    void setCatedratico(const char *);
    void setDias(int);

    int getAula() const;
    const char * getCatedrataico() const;
    int getDias() const;

    virtual void getCupo() const;

private:
    int aula;
    char * catedratico[30];
    int dias;
};

#endif // CLASE_H
