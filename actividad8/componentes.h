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
    void setnombre(const string &v);
    string getnombre();
    void setsistema(const string &v);
    string getsistema();
    void setmemoria(float v);
    float getmemoria();
    void setram(int v);
    int getram();

    friend ostream& operator<<(ostream &out, const componentes &p)
    {
        out << left ;
        out << setw(10) << p.nombre;
        out << setw(10) << p.sistema ;
        out << setw(8) <<  p.memoria ;
        out << setw(6) << p.ram;
        out << endl;

        return out;
    }
    friend istream& operator>>(istream &in, componentes &p)
    {
        // string temp;
        // float fuerza;
        // int salud;

        cout << "Nombre: ";
        getline(cin, p.nombre);

        cout << "sistema: ";
        getline(cin, p.sistema);

        cout << "memoria: ";
        cin >> p.memoria;

        cout << "ram: ";
        cin >> p.ram;


        return in;
    }
};

#endif