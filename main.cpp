#include <iostream>
#include "bodega.h"
#include "ingredientes.h"
#include "platos.h"
#include <vector>
using namespace std;
using std::cout;
using std::cin;
using std::endl;
using std::vector;

void ingredientesMet();
void platosMet();
void compra();

vector <ingredientes*> Vingredientes;
vector<platos*> Vplatos;
bodega* bodegaTemp = new bodega();
int contIngredientes=0;
platos* platosTemp;

int main()
{
        int opcion = -1;
        int* arr = NULL;

        do
        {
                cout << "\nMENU:\n"
                        << "1) Ingredientes\n"
                        << "2) Platos\n"
                        << "3) Compras\n"
                        << "0) Salir\n"
                        << "Seleccione una opcion: ";
                cin >> opcion;
                switch (opcion)
                {
                        case 1:
                               ingredientesMet();
                                break;
                        case 2:
                               
                                break;
                        case 3:
                                
                                break;
                        case 0:
                                if (arr != NULL)
                                {
                                        delete[] arr;
                                        arr = NULL;
                                }
                                cout << "Saliendo..." << endl;
                                break;
            default:
                                cout << "Opcion no valida!" << endl;
                                break;
                }
        }
        while(opcion != 0);
        return 0;
}


void ingredientesMet()
{
    ingredientes* ingre;
    char resp;
    cout<<"1.Crear Ingredientes\n2.Listar Ingredientes\n";
    cin>>resp;
        string nombre="";
        string tipo="";
        int cantidadSabor=0,duracion=0,cantidad=0;
    switch(resp)
    {
        case '1':
        cout<<"Nombre del Ingrediente: "<<endl;
        cin>>nombre;
        cout<<"Tipo de Ingrediente: "<<endl;
        cin>>tipo;
        cout<<"Cantidad del Ingrediente"<<endl;
        cin>>cantidad;
        cout<<"Cantidad Sabor del Ingrediente"<<endl;
        cin>>cantidadSabor;
        cout<<"Duracion del Ingrediente"<<endl;
        cin>>duracion;
        ingre = new ingredientes(nombre,cantidad,tipo,cantidadSabor,duracion);
       
        bodegaTemp->setIngredientres(ingre);
        break;

        case '2':
        for(int i = 0; i < bodegaTemp->Vingredientes.size(); i++)
        {
            cout<<"["<<bodegaTemp->Vingredientes[i]->getNombre()<<"]";
        }
        
        break;
        
    }
}

void platosMet(){
    platos* pl;
    char resp string resena="";
    int cantidadSabor=0 , registro=0, precio=0, valorPromedio=0;
    cout<<"1.Crear Platos\n2.Listar Platos\n";
    cin>>resp;

    switch(resp)
    {
        case '1':
        int op;
        char sigue;
        int cont = 0;
        bool bade = true
        do{

        for(int i = 0; i < bodegaTemp->Vingredientes.size(); i++)
        {
            cout<<"["<<bodegaTemp->Vingredientes(i)->getNombre()<<"]";
            cont++;
        }
        cout<<"Ingrese los Ingredientes para el Plato"<<endl;
        cin>>op;
        if(op<0||op>bodegaTemp->Vingredientes.size()){
            cout<<"Opcion no definida"
        }else{
           if(bodegaTemp->Vingredientes[op]->getCantidad()>0){
               int cantidadTotal = bodegaTemp->Vingredientes[op]->getCantidad();
               pl=new platos
           }
           
        }

        cout<<"Usted agregara comida[y/n]:"<<endl;
        cin>>sigue;
        
        if(sigue=='y'||sigue=='Y'){
            bade = true;
        }else{
            bade = false;
        }

    }

  }

}while(bade==true);

  cout<<endl;
  break;
     case '2':

     break;

void compra(){

}