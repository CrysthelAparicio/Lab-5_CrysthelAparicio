#include "platos.h"
#include <iostream>
#include <string>
using namespace std;

platos::platos(){

}

platos::platos(ingredientes* ingre, int pCantidad, int pRegistro, int pPrecio, int pValorPromedio){
   Vingredientes.push_back(ingre);
   cantidadSabor = pCantidad;
   registro = pRegistro;
   precio = pPrecio;
   valorPromedio = pValorPromedio;
}

ingredientes* platos::getIngredientes(int i){
    return Vingredientes[i];
}

string platos::getResena(){
    return resena;
}

int platos::getCantidadSabor(){
    return cantidadSabor;
}

int platos::getRegistro(){
    return registro;
}

int platos::getPrecio(){
    return precio;
}

int platos::getValorPromedio(){
    return valorPromedio;
}


/////
void platos::setIngredientres(ingredientes* ingre){
    Vingredientes.push_back(ingre);
}

void platos::setResena(string pResena){
    resena = pResena;
}

void platos::setCantidadSabor(int pCantidadSabor){
    cantidadSabor = pCantidadSabor;
}

void platos::setRegistro(int pRegistro){
    registro = pRegistro;
}

void platos::setPrecio(int pPrecio){
    precio = pPrecio;
}

void platos::setValorPromedio(int pValorPromedio){
    valorPromedio = pValorPromedio;
}

/*
platos::platos(string pResena, int pCantidadSabor, int pRegistro, int pPrecio, int pValorPromedio){
    nombre = pNombre;
    cantidad = pCantidad;
    tipo = pTipo;
    cantidadSabor = pCantidadSabor;
    duracion = pDuracion;
}
*/