#include <iostream>
using namespace std;
class Propietario{
	 // atributos
	 protected : string nombres,apellidos,direccion,cui;
				int telefono;
	//constructor
	protected :
          Propietario (){
	     }
	        Propietario (string nom,string ape, string dir, int tel){
				nombres = nom;
				apellidos = ape;
				direccion = dir;
				telefono = tel;
				cui = cui;
	}



   //metodo
   void mostrar();
};
