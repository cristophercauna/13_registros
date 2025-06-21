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
    int posMayor,posMenor;
    posMayor=0;
    posMenor=0;
    for(i=0;i<n;i++){
        if(empleado[i].sueldo>empleado[posMayor].sueldo){
            posMayor=i;
        }
        if(empleado[i].sueldo<empleado[posMenor].sueldo){
            posMenor=i;
        }
    }
    cout<<"\n===== EMPLEADO CON MAYOR SUELDO =====\n";
    cout<<"Nombre : "<<empleado[posMayor].nom<<endl;
    cout<<"Sexo : "<<empleado[posMayor].sex<<endl;
    cout<<"Sueldo: "<<empleado[posMayor].sueldo<<endl;

    cout<<"\n===== EMPLEADO CON MENOR SUELDO ======\n";
    cout<<"Nombre : "<<empleado[posMenor].nom<<endl;
    cout<<"Sexo : "<<empleado[posMenor].sex<<endl;
    cout<<"Sueldo: "<<empleado[posMenor].sueldo<<endl;
    return 0;
}
