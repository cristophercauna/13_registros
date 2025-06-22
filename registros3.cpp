#include<iostream>
#include<string>
using namespace std;
struct persona{
    string nom;
    int dia;
    int mes;
    int anualidad;
};
int main(){
    persona personas[100];
    int n;

    string nombresMes[13] = {
        "", "enero", "febrero", "marzo", "abril", "mayo", "junio",
        "julio", "agosto", "septiembre", "octubre", "noviembre", "diciembre"
    };

    cout<<"Ingrese el numero de personas: "; cin>>n;
    cin.ignore();
    for(int i=0;i<n;i++){
        cout<<"Persona: "<<i+1<<" | Nombre: ";
        getline(cin,personas[i].nom);
        cout<<"Persona: "<<i+1<<" | Dia de nacimiento: ";
        cin>>personas[i].dia;
        cout<<"Persona: "<<i+1<<" | Mes de nacimiento: ";
        cin>>personas[i].mes;
        cout<<"Persona: "<<i+1<<" | Anualidad de nacimiento: ";
        cin>>personas[i].anualidad;
        cin.ignore();
    }
    int mesbuscado=-1;
    while(mesbuscado!=0){
        do{
            cout<<"Ingrese el mes buscado ( 0 para terminar)"<<endl;
            cin>>mesbuscado;
            if(mesbuscado<0 || mesbuscado>12){
                cout<<"Mes invalido. Debe estar entre 1-12, o 0 para salir"<<endl;
            }
        }while(mesbuscado<0 || mesbuscado>12);
        if(mesbuscado!=0){
        int contador=0;
        cout<<"\nPersonas nacidas en el mes de: "<<nombresMes[mesbuscado]<<": \n";
        for(int i=0;i<n;i++){
            if(personas[i].mes==mesbuscado){
                cout << "Nombre: " << personas[i].nom<<" | Fecha de nacimiento: "<<personas[i].dia<<"/"<<personas[i].mes<<"/"<<personas[i].anualidad<<endl;
                contador=contador+1;
            }
        }
        if(contador==0){
            cout<<"No hay personas que hayan nacido ese mes"<<endl;
        }
        }
    }
    return 0;
}