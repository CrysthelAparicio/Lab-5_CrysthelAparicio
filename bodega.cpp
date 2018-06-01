#include "bodega.h"
#include <iostream>
#include<string>
using namespace std;
bodega::bodega(){
    
}

bodega::bodega(ingredientes* ingre){
    Vingredientes.push_back(ingre);
}

ingredientes* bodega::getIngredientes(int i){
    return Vingredientes[i];
}

void bodega::setIngredientres(ingredientes* ingre){
    Vingredientes.push_back(ingre);
}