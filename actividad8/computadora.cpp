#include "computadora.h"
#include <fstream>

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

void computadora::respaldar_tabla()
{
    ofstream archivo("componentes_tabla.txt");
    if (archivo.is_open()) {
        archivo << left;
        archivo << setw(10) << "Nombre";
        archivo << setw(10) << "sistema";
        archivo << setw(8) << "memoria";
        archivo << setw(6) << "ram";
        archivo << endl;
        for (size_t i = 0; i < cont; i++) {
            componentes &p = arreglo[i];
            archivo << p;
        }
    }
    archivo.close();
}
void computadora::respaldar()
{
    ofstream archivo("componentes.txt");
    if (archivo.is_open()) {
        for (size_t i = 0; i < cont; i++) {
            componentes &p = arreglo[i];
            archivo << p.getnombre() << endl;
            archivo << p.getsistema() << endl;
            archivo << p.getmemoria() << endl;
            archivo << p.getram() << endl;
        }
    }
    archivo.close();
}

void computadora::recuperar()
{
    ifstream archivo("componentes.txt");
    if (archivo.is_open()) {
        string temp;
        float memoria;
        int ram;
        componentes p;

        while (true)
        {
            getline(archivo, temp); // nombre
            if (archivo.eof()) {
                break;
            }
            p.setnombre(temp);

            getline(archivo, temp);
            p.setsistema(temp);

            getline(archivo, temp);
            memoria = stof(temp);  // string-to-float
            p.setmemoria(memoria);

            getline(archivo, temp);
            ram = stoi(temp); // // string-to-int
            p.setram(ram);

            agregarcomponentes(p);            
        }
        
    }
    archivo.close();
}