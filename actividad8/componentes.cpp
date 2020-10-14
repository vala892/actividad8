#include "componentes.h"

componentes::componentes()
{

}
   
    componentes::componentes(const string &nombre, const string &sistema, float memoria, int ram);
{
    this.nombre = nombre;
    this.sistema = sistema;
    this.memoria = memoria;
    this.ram = ram; 
}