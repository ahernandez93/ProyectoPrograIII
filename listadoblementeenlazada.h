#ifndef LISTADOBLEMENTEENLAZADA_H
#define LISTADOBLEMENTEENLAZADA_H
#include "Curso.h"
#include "ListaEnlazada.h"

class ListaDoblementeEnlazada : public ListaEnlazada
{
    public:
        ListaDoblementeEnlazada();
        virtual ~ListaDoblementeEnlazada();
        void insertarAlInicio(Curso *);
        void insertarAlFinal(Curso *);

    protected:

    private:
};

#endif // LISTADOBLEMENTEENLAZADA_H
