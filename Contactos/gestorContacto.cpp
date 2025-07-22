#include <iostream>
#include "gestorContacto.h"
#include <string>
using namespace std;

void agregarContacto(contactoEmail lista[], int &n, contactoEmail nuevo){
    if(n<100){
        lista[n]= nuevo;
        n++;
    }else{
        cout<<"No se puede agregar mas contactos lista llena"<<endl;
    }
}
void modificarContacto(contactoEmail lista[],int n, int k, contactoEmail nuevo){
    if(k>=0 && k<n){
        lista[k]= nuevo;
    }else{
        cout<<"No existe el contacto a modificar"<<endl;
    }

}
void mostrarContactos(contactoEmail lista[],int n){
    for(int i=0 ; i<n ; i++){
        cout<<"Contacto#"<<i+1<<endl;
        imprimeContacto(lista[i]);
        cout<<endl;
    }
}
void buscarPorDominio(contactoEmail lista[], int n, string dominio){
    int contador = 0;
    for(int i=0 ; i<n ; i++){
        if(lista[i].email.domain == dominio){
            imprimeContacto(lista[i]);
            cout<<endl;
            contador++;
        }
    }
    if(contador == 0){
        cout<<"No se encontro ningun contacto con ese dominio"<<endl;
    }
}
void eliminarContacto(contactoEmail lista[], int &n, int index){
    if(index >= 0 && index < n){
        for(int i=index ; i<n-1 ; i++){
            lista[i]=lista[i+1];
        }
        n--;
        cout<<"Contacto eliminado correctamente"<<endl;
    }else{
        cout<<"La Posicion ingresada es invalida"<<endl;
    }
}