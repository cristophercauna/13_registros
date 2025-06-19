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

int n,i;
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
cout<< "\n=== Datos Ingresados ===\n";
for(int i=0 ; i<n ; i++){
    cout<<"\nEmpleado #"<<i+1<<endl;
    cout<<"Numero: "<<EMPLEADOS[i].num<<endl;
    cout<<"Nombre: "<<EMPLEADOS[i].nom<<endl;
    cout<<"Ventas: ";
    for(int j=0 ; j<12 ; j++)
    cout<<EMPLEADOS[i].ven[j]<<" ";
    cout<<"\nSalario: "<<EMPLEADOS[i].sal<<endl;
}
// VOLVEMOS A AGREGAR "IMPRIMIR EL NUMERO DE TRABAJADOR,NOMBRE,VENTAS Y SALARIO"
int maxVendedor;
float maxVentas,VentaEmpleado;
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
    for (int i=0 ; i<n ; i++){
        VentaEmpleado=0;
for(int j=0;j<12;j++){
    VentaEmpleado= VentaEmpleado+ EMPLEADOS[i].ven[j];
    }
    if(VentaEmpleado>100){
        EMPLEADOS[i].sal= EMPLEADOS[i].sal + (0.10*EMPLEADOS[i].sal);
    }
}
cout<<"\n=== Datos Actualizados ===\n";
for(int i=0 ; i<n ; i++){
    cout<<"\nEmpleado #"<<i+1<<endl;
    cout<<"Numero: "<<EMPLEADOS[i].num<<endl;
    cout<<"Nombre: "<<EMPLEADOS[i].nom<<endl;
    cout<<"Ventas: ";
    for(int j=0 ; j<12 ; j++)
    cout<<EMPLEADOS[i].ven[j]<<" ";
    cout<<"\nSalario Actualizado: "<<EMPLEADOS[i].sal<<endl;

}
int contador=0;
cout<<"\n=== Trabajadores que tuvieron ventas menores a 30 en diciembre ===\n";
for(int i=0;i<n;i++){
    if(EMPLEADOS[i].ven[11]<30){
        cout<<"Numero: "<<EMPLEADOS[i].num<<" | Nombre: "<<EMPLEADOS[i].nom<<endl;
         contador=contador+1;
    }
}
if(contador==0){
    cout<<"No hubo trabajadores con ventas menores a 30 en el mes de diciembre"<<endl;
}
return 0;
}