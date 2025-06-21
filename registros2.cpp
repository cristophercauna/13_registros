#include<iostream>
#include<string>
using namespace std;
    struct persona{
        string nom;
        int DNI;
        int edad;
    };
int main(){
    persona personas[100];
    int n,i;
    cout<<"Ingrese la cantidad de personas: "; cin>>n;
    cin.ignore();
    for(i=0;i<n;i++){
        cout<<"Persona: "<<i+1<<" -Nombre: ";
        getline(cin, personas[i].nom);
        cout<<"Persona: "<<i+1<<" -DNI: ";
        cin>>personas[i].DNI;
        cout<<"Persona: "<<i+1<<" -Edad: ";
        cin>>personas[i].edad;
    }
    return 0;
}