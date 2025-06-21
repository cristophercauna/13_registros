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
        cin.ignore();
    }
    int sumedades,contador;
    float promedades;
    sumedades=0; contador=0; promedades=0;
    for(i=0;i<n;i++){
        sumedades=sumedades+personas[i].edad;
        if(personas[i].edad>50){
            contador=contador+1;
        }
    }
    if(n>0){
        promedades=(float)sumedades/n;
    }
    cout<<"Cantidad de personas mayores a 50: "<<contador<<endl;
    cout<<"\n Promedio de edades: "<<promedades<<endl;
    
    cout<<"\n======= DATOS DE PERSONAS INGRESADAS =======\n";
    for(i=0;i<n;i++){
        cout<<"Persona: "<<i+1<<" -Nombre: ";
        cout<<personas[i].nom<<endl;
        cout<<"Persona: "<<i+1<<" -DNI: ";
        cout<<personas[i].DNI<<endl;
        cout<<"Persona: "<<i+1<<" -Edad: ";
        cout<<personas[i].edad<<endl;
    }
    return 0;
}