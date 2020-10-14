#ifndef CONPONENTES_H
#define COMPONENTES_H

#include <iostream>
using namespace std;

class componentes 
{
    string nombre;
    string sistemas;
    float memoria;
    int ram;
public:
    componentes();
    componentes(const string &nombre,
              const string &sistema,
              float memoria,
              int ram);
    void setNombre(const string &v);
    string getNombre();
};

#endif