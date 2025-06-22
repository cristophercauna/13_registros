#include<iostream>
#include<string>
using namespace std;
struct atleta{
    string name;
    string pais;
    string diciplina;
    int nummedallas;
};
int main(){
    atleta atletas[100];
    int n;
    cout<<"Ingrese el numero de atletas: "; cin>>n;
    cin.ignore();
    for(int i=0;i<n;i++){
        cout<<"Persona: "<<i+1<<" | Nombre: ";
        getline(cin,atletas[i].name);
        cout<<"Persona: "<<i+1<<" | Pais: ";
        cin>>atletas[i].pais;
        cout<<"Persona: "<<i+1<<" | Disiplina: ";
        cin>>atletas[i].diciplina;
        cout<<"Persona: "<<i+1<<" | Numero de medallas: ";
        cin>>atletas[i].nummedallas;
        cin.ignore();
    }
    return 0;
}