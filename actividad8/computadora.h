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
    void respaldar_tabla();
    void respaldar();
    void recuperar();

    friend computadora& operator<<(computadora &v, const componentes &p)
    {
        v.agregarcomponentes(p);

        return v;
    }
};

#endif 