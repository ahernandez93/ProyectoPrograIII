#ifndef CLASE_H
#define CLASE_H
#include "curso.h"


class Clase : public Curso
{
public:
    Clase();
<<<<<<< HEAD
    Clase(int, char *, int, char, int, char *, int);
=======
    Clase(int, const char *, int, const char*, int, const char *, int);
>>>>>>> refs/remotes/origin/master
    virtual ~Clase();
    void setAula(int);
    void setCatedratico(const char *);
    void setDias(int);

    int getAula() const;
<<<<<<< HEAD
    const char * getCatedrataico() const;
    int getDias() const;

    virtual void getCupo() const;

private:
    int aula;
    char * catedratico[30];
=======
    const char * getCatedratico() const;
    int getDias() const;

    virtual int getCupo() const;

private:
    int aula;
    char * catedratico;
>>>>>>> refs/remotes/origin/master
    int dias;
};

#endif // CLASE_H
