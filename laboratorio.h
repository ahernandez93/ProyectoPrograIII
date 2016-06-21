#ifndef LABORATORIO_H
#define LABORATORIO_H
#include "curso.h"


class Laboratorio : public Curso
{
public:
    Laboratorio();
<<<<<<< HEAD
    Laboratorio(int, char *, int, char, int, char *, int);
    virtual ~Laboratorio();
=======
    Laboratorio(int, const char *, int, const char*, int, const char *, int);
    ~Laboratorio();
>>>>>>> refs/remotes/origin/master

    void setNumLaboratorio(int);
    void setInstructor(const char *);
    void setDias(int);

    int getNumLaboratorio() const;
    const char * getInstructor() const;
    int getDias() const;

<<<<<<< HEAD
    virtual void getCupo() const;

private:
    int numlaboratorio;
    char * instructor[30];
=======
    virtual int getCupo() const;

private:
    int numlaboratorio;
    char * instructor;
>>>>>>> refs/remotes/origin/master
    int dias;
};

#endif // LABORATORIO_H
