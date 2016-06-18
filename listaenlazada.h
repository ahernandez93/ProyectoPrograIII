#ifndef LISTAENLAZADA_H
#define LISTAENLAZADA_H
#include "curso.h"


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

};

#endif // LISTAENLAZADA_H
