#include<iostream>
#include<string>
using namespace std;
struct atleta{
    string name;
    string pais;
    string disciplina;
    int nummedallas;
};
int main(){
    atleta atletas[100];
    int n;
    cout<<"Ingrese el numero de atletas: "; 
    cin>>n;
    cin.ignore();
    for(int i=0;i<n;i++){
        cout<<"Persona: "<<i+1<<" | Nombre: ";
        getline(cin,atletas[i].name);
        cout<<"Persona: "<<i+1<<" | Pais: ";
        getline(cin,atletas[i].pais);
        cout<<"Persona: "<<i+1<<" | Disciplina: ";
        getline(cin,atletas[i].disciplina);
        cout<<"Persona: "<<i+1<<" | Numero de medallas: ";
        cin>>atletas[i].nummedallas;
        cin.ignore();
    }
    string paisbuscado;
    int mayormedallas,indicemax;
    mayormedallas=-1;
    indicemax=-1;
    cout<<"Ingrese el pais buscado: ";
    getline(cin,paisbuscado);
    cout<<"\n======== ATLETAS NACIDOS EN "<<paisbuscado<<" =======\n";
    for(int i=0;i<n;i++){
        if(atletas[i].pais==paisbuscado){
            cout<<"Persona: "<<i+1<<" | Nombre: "<<atletas[i].name<<endl;
            cout<<"Persona: "<<i+1<<" | Pais: "<<atletas[i].pais<<endl;
            cout<<"Persona: "<<i+1<<" | Disciplina: "<<atletas[i].disciplina<<endl;
            cout<<"Persona: "<<i+1<<" | Numero de medallas: "<<atletas[i].nummedallas<<endl;
            if(atletas[i].nummedallas>mayormedallas){
                mayormedallas=atletas[i].nummedallas;
                indicemax=i;
            }
        }
    }
    if(indicemax!=-1){
    cout<<"\n======= EL ATLETA CON MAYOR MEDALLAS =======\n";
    cout<<"Nombre: "<<atletas[indicemax].name<<endl;
    cout<<"Pais: "<<atletas[indicemax].pais<<endl;
    cout<<"Disciplina: "<<atletas[indicemax].disciplina<<endl;
    cout<<"Medallas: "<<atletas[indicemax].nummedallas<<endl;
    }
    else{
        cout<<"\n No se encontro ningun atleta de ese pais.\n";
    }
    return 0;
}