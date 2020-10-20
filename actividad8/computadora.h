#ifndef COMPUTADORA_H
#define COMPUTADORA_H

#include "componentes.h"

class computadora
{
    componentes arreglo[5];
    size_t cont;
public:
    computadora();
    void agregarcomponentes(const componentes &p);
    void mostrar();

    friend computadora& operator<<(computadora &v, const componentes &p)
    {
        v.agregarcomponentes(p);

        return v;
    }
};

#endif 