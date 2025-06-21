#include<iostream>
#include<string>
using namespace std;
struct emp{
    string nom;
    string sex;
    float sueldo;
};  
int main(){
    emp empleado [100];
    int n,i;
    cout<<"\n========= EMPRESA DataTech ==========\n";
    cout<<"Ingrese cantidad de empleados: "<<endl;
    cin>>n;
    cin.ignore();
    for(i=0;i<n;i++){
        cout<<"Empleado: "<<i+1<<" -Nombre: ";
        getline(cin, empleado[i].nom);
        cout<<"Empleado: "<<i+1<<" -Sexo: ";
        getline(cin, empleado[i].sex);
        cout<<"Empleado: "<<i+1<<" -Sueldo: ";
        cin>>empleado[i].sueldo;
        cin.ignore();
    }
    return 0;
}