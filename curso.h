#ifndef CURSO_H
#define CURSO_H


class Curso
{
public:
        Curso();
        Curso(int, const char *, int,const char*);
        virtual ~Curso();
        void setCodigo(int);
        void setNombre(const char *);
        void setMatriculados(int);
        void setHora(const char*);

        int getCodigo() const;
        const char * getNombre() const;
        int getMatriculados() const;
        const char *getHora() const;

        void setSiguiente(Curso *);
        Curso * getSiguiente();
        void setAnterior(Curso *);
        Curso * getAnterior();

        virtual int getCupo() const = 0;

private:
        int codigo;
        char * nombre;
        int matriculados;
        char * hora;
        Curso * siguiente;
        Curso * anterior;
};

#endif // CURSO_H
