#ifndef CURSO_H
#define CURSO_H


class Curso
{
public:
        Curso();
<<<<<<< HEAD
        Curso(int, char *, int, char);
=======
        Curso(int, const char *, int,const char*);
>>>>>>> refs/remotes/origin/master
        virtual ~Curso();
        void setCodigo(int);
        void setNombre(const char *);
        void setMatriculados(int);
<<<<<<< HEAD
        void setHora(char);
=======
        void setHora(const char*);
>>>>>>> refs/remotes/origin/master

        int getCodigo() const;
        const char * getNombre() const;
        int getMatriculados() const;
<<<<<<< HEAD
        char getHora() const;
=======
        const char *getHora() const;
>>>>>>> refs/remotes/origin/master

        void setSiguiente(Curso *);
        Curso * getSiguiente();
        void setAnterior(Curso *);
        Curso * getAnterior();
<<<<<<< HEAD

        virtual void getCupo() const = 0;

private:
        int codigo;
        char * nombre[30];
        int matriculados;
        char hora[3];
=======
        void imprimir () const;

        virtual int getCupo() const;

private:
        int codigo;
        char nombre[30];
        int matriculados;
        char hora[10];
>>>>>>> refs/remotes/origin/master
        Curso * siguiente;
        Curso * anterior;
};

#endif // CURSO_H
