#include <iostream>

using namespace std;

int main(){

    char nombre[100];
    int edad;
    char carrera[100];
    // cout<<"Hola que tal"<<endl;;
    cout<<"Nombre: ";
    fgets(nombre,sizeof(nombre),stdin);
    cout<<"Edad: ";
    cin>>edad;
    cin.ignore();
    cout<<"Carrera: ";
    fgets(carrera,sizeof(carrera),stdin);
    cout<<"\nMi nombre es "<<nombre;
    cout<<"Tengo "<<edad<<" anios de edad "<<endl; 
    cout<<"Estudio: "<<carrera;
    
    return 0;
}