#include "computadora.h"

computadora::computadora()
{
    cont = 0;
}

void computadora::agregarcomponentes(const componentes &p)
{
    if (cont < 4) {
        arreglo[cont] = p;
        cont++;
    }
    else {
        cout << "Arreglo lleno" << endl;
    }
}

void computadora::mostrar()
{
    for (size_t i = 0; i < cont; i++) {
        componentes &p = arreglo[i];
        cout << "Nombre: " << p.getNombre() << endl;
        cout << "sistema: " << p.getsistema() << endl;
        cout << "memoria: " << p.getmemoria() << endl;
        cout << "ram: " << p.getram() << endl;
        cout << endl;
    }
}