#ifndef PLATOS_H
#define PLATOS_H

#include<iostream>
#include<string>
#include<vector>
#include "ingredientes.h"
using namespace std;
using std::string;

class platos{
    private:

        vector<ingredientes*> Vingredientes;
        string resena;
        int cantidad_sabor;
        int registro;
        int precio;
        int valor_promedio;
        string nombre;

    public:
        platos(ingredientes*,string,int,int,int ,int,string );
        ingredientes* getingredientes(int);
        string getresena();
        string getnombre();
        int getcantidad_sabor();
        int getregistro();
        int getprecio();
        int getvalor_promedio();
        
        void setingredientes(ingredientes*);
        void setcantidad_sabor(int);
        void setregistro(int);
        void setprecio(int);
        void setvalor_promedio(int);
        void setnombre(string);
          
};
#endif

