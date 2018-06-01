#include <iostream>
#include <string>
#include <vector>
using std::string;
#include "ingredientes.h"
#ifndef Platos_H
#define Platos_H
using namespace std;

class platos{
    private:
    vector<ingredientes*> Vingredientes;
    string resena;
    int cantidadSabor=0;
    int registro=0;
    int precio;
    int valorPromedio;

    public:

    platos();
    ~platos();
    platos(ingredientes*,string,int,int,int,int)

    ingredientes* getIngredientes(int);
    void setIngredientres(ingredientes*);

    string getResena();
    int getCantidadSabor();
    int getRegistro();
    int getPrecio();
    int getValorPromedio();
    
    void setResena(string);
    void setCantidadSabor(int);
    void setRegistro(int);
    void setPrecio(int);
    void setValorPromedio(int);

};
#endif