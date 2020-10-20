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
     cout << left;
    cout << setw(10) << "Nombre";
    cout << setw(10) << "sistema";
    cout << setw(8) << "memoria";
    cout << setw(6) << "ram";
    cout << endl;
    for (size_t i = 0; i < cont; i++) {
        componentes &p = arreglo[i];
        cout << p;
        //cout << "Nombre: " << p.getNombre() << endl;
        //cout << "sistema: " << p.getsistema() << endl;
        //cout << "memoria: " << p.getmemoria() << endl;
        //cout << "ram: " << p.getram() << endl;
        //cout << endl;
    }
}