#ifndef CURSO_H
#define CURSO_H


class Curso
{
public:
        Curso();
        Curso(int, char *, int, char);
        virtual ~Curso();
        void setCodigo(int);
        void setNombre(const char *);
        void setMatriculados(int);
        void setHora(char);

        int getCodigo() const;
        const char * getNombre() const;
        int getMatriculados() const;
        char getHora() const;

        void setSiguiente(Curso *);
        Curso * getSiguiente();
        void setAnterior(Curso *);
        Curso * getAnterior();

        virtual void getCupo() const = 0;

private:
        int codigo;
        char * nombre[30];
        int matriculados;
        char hora[3];
        Curso * siguiente;
        Curso * anterior;
};

#endif // CURSO_H
