#include "Propietario.cpp"
#include <iostream>
using namespace std;
main() {
	string nit,nombres,apellidos,direccion,cui;
	int telefono;
	cout<<"Ingrese Nit: ";
	cin>>nit;
	cout<<"Ingrese Nombres: ";
	cin>>nombres;
	cout<<"Ingrese Apellidos: ";
	cin>>apellidos;
	cout<<"Ingrese Direccion: ";
	cin>>direccion;
	cout<<"Ingrese Telefono: ";
	cin>>telefono;
	cout<<"Ingrese cui: ";
	cin>>cui;
	
		Propietario obj = Persona(nombres,apellidos,direccion,telefono,nit,cui);
	obj.mostrar() ;
};
