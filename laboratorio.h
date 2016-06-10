#ifndef LABORATORIO_H
#define LABORATORIO_H
#include "curso.h"


class Laboratorio : public Curso
{
public:
    Laboratorio();
    Laboratorio(int, char *, int, char, int, char *, int);
    virtual ~Laboratorio();

    void setNumLaboratorio(int);
    void setInstructor(const char *);
    void setDias(int);

    int getNumLaboratorio() const;
    const char * getInstructor() const;
    int getDias() const;

    virtual void getCupo() const;

private:
    int numlaboratorio;
    char * instructor[30];
    int dias;
};

#endif // LABORATORIO_H
