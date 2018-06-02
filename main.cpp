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

int platatitos=0;
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
                               platosMet();
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
    platos* p;
    char tecla;
    int cont=0;
    string re="",nombre="";
    int sabor=0,registro=0,precio=0,valor=0;
    int op;
    bool bandera=true;
    char seguir;
            
    cout<<"1.Crear Platos\n2.Listar Platos"<<endl;
    cin>>tecla;
    switch(tecla){
        case '1':
            cout<<"Nombre del Plato\n"<<endl;
            cin>>nombre;
            cout<<"su reseña:"<<endl;
            cin>>re;
            cout<<"su precio:"<<endl;
            cin>>precio;
            do{
                
                for(int i=0;i<bodegaTemp->Vingredientes.size();i++){
                cout<<cont<<".["<<bodegaTemp->getIngredientes(i)->getNombre()<<"]"<<endl;
                cont++;
                }
                cout<<"Escriba los Ingredientes para los platos\n"<<endl;
                cin>>op;
                if(op<0||op>bodegaTemp->Vingredientes.size()){
                    cout<<"opcion invalidad"<<endl;
                }else{
                    Vingredientes.push_back(bodegaTemp->Vingredientes[op]);
                }
                //cout<<"Agregara otra comida[y/n]:"<<endl;
                //cin>>seguir;
                /*
                if(seguir=='y'|| seguir=='Y'){
                    bandera=true;
                }else{
                    bandera=false;
                }
            }while(bandera==true);
            */
            for(int i=0;Vingredientes.size();i++){
               if(i=0){
                   sabor=Vingredientes[i]->getCantidadSabor();
                   p=new platos(Vingredientes[i],re,sabor,registro,precio,valor,nombre);
                   Vplatos.push_back(p);
               }
            }
              for(int i=0;Vingredientes.size();i++){
                  delete Vingredientes[i];
              }
              Vingredientes.clear();
            cout<<endl;
            break;
     case '2':
        for(int i=0;i<Vplatos.size();i++){
                cout<<"["<<Vplatos[i]->getnombre()<<"]";
            }
            cout<<endl;
            break;
        default:
            cout<<"Opcion no definida"<<endl;
        break;
    }
}