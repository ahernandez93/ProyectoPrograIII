#ifndef LISTAENLAZADA_H
#define LISTAENLAZADA_H
#include "curso.h"


<<<<<<< HEAD
class ListaEnlazada : public Curso
{
public:
    ListaEnlazada();
=======
class ListaEnlazada
{
    public:
        ListaEnlazada();
        virtual ~ListaEnlazada();
        void insertarAlInicio(Curso *);
        void insertarAlFinal(Curso *);
        void mostrarLista();
        Curso * buscarCurso(int);
        void guardarArchivoAleatorio();
        void leerArchivoAleatorio();

        //Curso leerArchivoAleatorio(int);

    protected:
        Curso * inicio;
        Curso * fin;
        char nombreArchivo[30];
    private:

>>>>>>> refs/remotes/origin/master
};

#endif // LISTAENLAZADA_H
