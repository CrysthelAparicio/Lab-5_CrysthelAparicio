#include "ingredientes.h"
#include <iostream>
#include <string>

using namespace std;

ingredientes::ingredientes(){

}

ingredientes::~ingredientes(){

}


ingredientes::ingredientes(string pNombre, int pCantidad, string pTipo, int pCantidadSabor, int pDuracion){
    nombre = pNombre;
    cantidad = pCantidad;
    tipo = pTipo;
    cantidadSabor = pCantidadSabor;
    duracion = pDuracion;
}

string ingredientes::getNombre(){
    return nombre;
}

void ingredientes::setNombre(string pNombre){
    nombre = pNombre;
}

int ingredientes::getCantidad(){
    return cantidad;
}

void ingredientes::setCantidad(int pCantidad){
    cantidad = pCantidad;
}

string ingredientes::getTipo(){
    return tipo;
}

void ingredientes::setTipo(string pTipo){
    tipo = pTipo;
}

int ingredientes::getCantidadSabor(){
    return cantidadSabor;
}

void ingredientes::setCantidadSabor(int pCantidadSabor){
    cantidadSabor = pCantidadSabor;
}

int ingredientes::getDuracion(){
    return duracion;
}

void ingredientes::setDuracion(int pDuracion){
    duracion = pDuracion;
}