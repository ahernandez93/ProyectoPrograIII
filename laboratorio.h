#ifndef LABORATORIO_H
#define LABORATORIO_H
#include "curso.h"


class Laboratorio : public Curso
{
public:
    Laboratorio();
    Laboratorio(int, const char *, int, const char*, int, const char *);
    ~Laboratorio();

    void setNumLaboratorio(int);
    void setInstructor(const char *);
    void setDias();

    int getNumLaboratorio() const;
    const char * getInstructor() const;
    int getDias() const;

    virtual int getCupo() const;

private:
    int numlaboratorio;
    char * instructor;
    int dias;
};

#endif // LABORATORIO_H
