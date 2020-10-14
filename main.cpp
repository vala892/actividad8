#include <iostream>
#include "computadora.h"

using namespace std;

int main() {
    componentes p02 = componentes("pc mater", "windows", 500, 32);
    componentes p03;
    p03.setNombre("pc prueba");
    p03.setsistema("mac");
    p03.setmemoria("250");
    p03.setram("16");

     computadora vj;

    vj.agregarcomponente(p02);
    vj.agregarcomponente(p03);

    vj.mostrar();

    return 0;
}
