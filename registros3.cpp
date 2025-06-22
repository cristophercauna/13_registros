#include<iostream>
#include<string>
using namespace std;
struct persona{
    string nom;
    int dia;
    string mes;
    int anualidad;
};
int main(){
    persona personas[100];
    int n;
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
    return 0;
}