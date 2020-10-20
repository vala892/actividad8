#include "componentes.h"

componentes::componentes()
{

}

componentes::componentes(const string &nombre,
              const string &sistema,
              float memoria,
              int ram)
{
    this->nombre = nombre;
    this->sistema = sistema;
    this->memoria = memoria;
    this->ram = ram;
}

void componentes::setnombre(const string &v)
{
    nombre = v;
}

string componentes::getnombre()
{
    return nombre;
}

void componentes::setsistema(const string &v)
{
    sistema = v;
}

string componentes::getsistema()
{
    return sistema;
}

void componentes::setmemoria(float v)
{
    memoria = v;
}

float componentes::getmemoria()
{
    return memoria;
}

void componentes::setram(int v)
{
    ram = v;
}

int componentes::getram()
{
    return ram;
}