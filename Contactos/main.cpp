#include<iostream>
#include<string>
using namespace std;

struct correo{
    string user;
    string domain;
};

struct contactoEmail{
    string nom;
    char sex;
    int edad;
    correo email;
};

void leerCorreo(correo &, string, string);
void leerContacto(contactoEmail &, string, char, int, correo);
void imprimeContacto(contactoEmail &);

int main(){
    int n,k,op;
    string nom, user, domain;
    char sex;
    int edad;
    correo email;
    contactoEmail cont, lista[100];
    n = 0;
    do{
        system("cls");
        cout<<"Menu de opciones -------------------------"<<endl;
        cout<<"1. Agregar contacto"<<endl;
        cout<<"2. Modificar contactos"<<endl;
        cout<<"3. Mostrar contactos"<<endl;
        cout<<"0. Salir"<<endl;
        cout<<"Elige una opcion: "; cin>>op;
        switch(op){
            case 1:
                cout<<"Ingrese los datos de un usuario: "<<endl;
                cin.ignore();
                cout<<"Ingrese el nombre del contacto: "; getline(cin,nom);
                cout<<"Ingrese el sexo (M/F): "; cin>>sex;
                cout<<"Ingrese la edad: "; cin>>edad;
                cout<<"Ingrese el correo electronico (usuario@dominio): "<<endl;
                cout<<"\tIngrese el usuario: "; cin>>user;
                cout<<"\tIngrese el dominio: "; cin>>domain;
                
                leerCorreo(email,user,domain);
                leerContacto(cont,nom,sex,edad,email);
                //imprimeContacto(cont);

                lista[n] = cont;
                n++;
                system("pause");
                break;
            case 2:
                if(n==0){
                    cout<<"No hay contactos que modificar"<<endl;
                }
                cout<<"Contactos Disponibles"<<endl;
                for(int i=0;i<n;i++){
                    cout<<"Contacto #"<<i+1<<":"<<lista[i].nom<<endl;
                }
                cout<<"Ingrese el contacto que quiere modificar"; cin>>k;
                k=k-1;
                if(k<0 ||k>=n){
                    cout<<"El contacto a modificar no esta registrado"<<endl;
                    system("pause");
                    break;
                }
                cout<<"Contacto a modificar #"<<endl;
                imprimeContacto(lista[k]);
                cout<<"-----------------------------------"<<endl;
                cout<<"Apartir de aca los datos que ingresen seran los nuevos"<<endl;
                cin.ignore();
                cout<<"Nombre | "; getline(cin,nom);
                cout<<"Sexo | "; cin>>sex;
                cout<<"Edad | "; cin>>edad;
                cout<<"Ingrese el Correo Electronico (usurio@dominio)"<<endl;
                cout<<"\tUsuario | "; cin>>user;
                cout<<"\tDominio | "; cin>>domain;
                leerCorreo(email,user,domain);
                leerContacto(lista[k],nom,sex,edad,email);
                break;
            case 3:
                for(int i = 0; i < n; i++){
                    cout<<"Contacto #"<<i+1<<endl;
                    imprimeContacto(lista[i]);
                    cout<<endl;
                }
                system("pause");
                break;
            case 0:
                char preg;
                cout<<"Esta seguro de salir? (S/N): ";
                cin>>preg;
                if(preg=='S' || preg=='s'){
                    cout<<"El programa a terminado, adios"<<endl;
                }else{
                    if(preg=='N' || preg=='n'){
                    cout<<"Volviendo al menu"<<endl;
                    system("pause");
                    op=1;
                    } 
                }
                break;
            
            default:
                cout<<"Opcion no valida!"<<endl;
                system("pause");
                break;
        }
    } while(op != 0);
    return 0;
}

void leerContacto(contactoEmail &c, string n, char s, int e, correo em){
    c.nom = n;
    c.sex = s;
    c.edad = e;
    c.email = em;
}

void leerCorreo(correo &c, string u, string d){
    c.user = u;
    c.domain = d;
}

void imprimeContacto(contactoEmail &c){
    cout<<"Nombre: "<<c.nom<<endl;
    cout<<"Sexo: "<<c.sex<<endl;
    cout<<"Edad: "<<c.edad<<endl;
    cout<<"Email: "<<c.email.user<<"@"<<c.email.domain<<endl;
}
