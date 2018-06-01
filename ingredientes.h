#include <iostream>
#include <string>
#include <vector>
using std::string;

#ifndef INGREDIENTES_H
#define INGREDIENTES_H
using namespace std;

class ingredientes{
    private:
        string nombre;
        int cantidad; 
        string tipo;
        int cantidadSabor;
        int duracion;

    public:
    ingredientes();
    ~ingredientes();
    ingredientes(string,int,string,int,int);

    string getNombre();
    int getCantidad();
    string getTipo();
    int getCantidadSabor();
    int getDuracion();
    
    void setNombre(string);
    void setCantidad(int);
    void setTipo(string);
    void setCantidadSabor(int);
    void setDuracion(int);

};
#endif