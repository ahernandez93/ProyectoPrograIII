#ifndef LISTADOBLEMENTEENLAZADA_H
#define LISTADOBLEMENTEENLAZADA_H
#include "Curso.h"

class ListaDoblementeEnlazada
{
    public:
        ListaDoblementeEnlazada();
        virtual ~ListaDoblementeEnlazada();
        void insertarAlInicio(Curso *);
        void insertarAlFinal(Curso *);
        void mostrarLista();
        Curso * buscarCurso(int);
        void guardarArchivoAleatorio();
        void leerArchivoAleatorio();

    protected:

    private:
        Curso * inicio;
        Curso * fin;
        char nombreArchivo[30];
};

#endif // LISTADOBLEMENTEENLAZADA_H
