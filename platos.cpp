#include "platos.h"
#include <iostream>
#include <string>
using namespace std;

platos::platos(ingredientes* ingre,string presena,int pcantidad_s,int pregistro,int pprecio,int pvalor,string pnombre){
        Vingredientes.push_back(ingre);
        cantidad_sabor=+pcantidad_s;
        registro=+pregistro;
        precio=pprecio;
        valor_promedio=pvalor;
        resena=presena;
        nombre=pnombre;

}
ingredientes* platos::getingredientes(int i){
    return Vingredientes[i];
}
 string platos::getresena(){
     return resena;
 }
 string platos::getnombre(){
     return nombre;
 }
int platos::getcantidad_sabor(){
    return cantidad_sabor;
}
int platos::getregistro(){
    return registro;
}
int platos::getprecio(){
    return precio;
}
int platos::getvalor_promedio(){
    return valor_promedio;
}
 
void platos::setingredientes(ingredientes* ingre){
    Vingredientes.push_back(ingre);
}
void platos::setcantidad_sabor(int cantidad){
    cantidad_sabor=+cantidad;
} 
void platos::setregistro(int reg){
    registro=+reg;
}
void platos::setprecio(int p){
    precio=p;
}
void platos::setvalor_promedio(int v){
    valor_promedio=v;
}
void platos::setnombre(string v){
    nombre=v;
}