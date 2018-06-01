#include <iostream>
#include <string>
using std::string;
#include <vector>
#include "ingredientes.h"
#ifndef BODEGA_H
#define BODEGA_H

using namespace std;

class bodega{
    private:
       
    public:  
    bodega();   
    vector<ingredientes*> Vingredientes;    
    bodega(ingredientes*);
    ingredientes* getIngredientes(int);
    void setIngredientres(ingredientes*);
    
};
#endif