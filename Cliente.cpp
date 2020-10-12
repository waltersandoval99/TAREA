#include "Persona.cpp"
#include<iostream>

using namespace std;
class Cliente:Persona{
	// Atributos
	private : string nit;
	public: 
	//Constructor
		Cliente(string nom,string ape,int tel,string n):Persona(nom,ape,tel){
			nit=n;
		}
	//modificar (set)
	void setNit(string n){nit=n;}	
	void setNombres(string nom){nombres=nom;}
	void setApellidos(string ape){apellidos=ape;}	 
	void setTelefono(int tel){telefono=tel;}	 
	 //mostrar (get) 
	 	string getNit(){return nit;}
	 	string getNombres(){return nombres;}
	 	string getApellidos(){return apellidos;}
	 	int getTelefono(){return telefono;}	
	// Metodos
		void mostrar(){
cout<<"-----------------------------------------------"<<endl;
cout<<nit<<","<<nombres<<", "<<apellidos<<", "<<telefono<<endl;
}
};


