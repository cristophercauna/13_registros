#include<iostream>
#include<string>
using namespace std;
struct EMP{
    int num;
    string nom;
    float ven[12], sal;
};
int main(){
EMP EMPLEADOS [100];

int n;
cout << "Ingrese el numero de empleados: ";
cin>>n;
for(int i=0 ; i<n ; i++){
    cout << "\n=== Empleado " << i + 1 << " ===" << endl;

    cout<<"Ingrese el numero del trabajador: ";
    cin>>EMPLEADOS[i].num;
    cin.ignore();
    cout<<"Ingrese el nombre del trabajador: ";
    getline(cin,EMPLEADOS[i].nom);
    
    cout<<"Ingrese las ventas de los 12 meses separadas por espacio:\n";
    for(int j=0 ; j<12 ; j++)
    cin>>EMPLEADOS[i].ven[j];
    cout<<"Ingrese el salario del trabajador:\n ";
    cin>>EMPLEADOS[i].sal;
}
int VentaEmpleado,maxVendedor;
float maxVentas;
maxVentas=0;
for(int i=0; i<n ; i++){
    VentaEmpleado=0;
for(int j=0; j<12 ; j++){
    VentaEmpleado=VentaEmpleado + EMPLEADOS[i].ven[j];
}
    if(VentaEmpleado>maxVentas){
        maxVentas=VentaEmpleado;
        maxVendedor=i;
    }
}
cout<<"El Numero del empleado que vendio mas es el numero: "<<EMPLEADOS[maxVendedor].num<<endl;
cout<<"El nombre del maximo vendedor es : "<<EMPLEADOS[maxVendedor].nom;
return 0;
}