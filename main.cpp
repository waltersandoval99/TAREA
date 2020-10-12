#include"Cliente.cpp"
#include<iostream>
using namespace std;
main(){
	string nit,nombres,apellidos;
	int telefono;
	cout<<"Ingrese Nit: ";
	cin>>nit;
	cout<<"Ingrese Nombres: ";
	cin>>nombres;
	cout<<"Ingrese Apellidos:";
	cin>>apellidos;
	cout<<"Ingrese Telefono: ";
	cin>>telefono;
	
	Cliente obj = Cliente(nombres,apellidos,telefono,nit);
	obj.mostrar();
	
	cout<<"--------- Modificar ------------"<<endl;
	cout<<"Ingrese Nit: ";
	cin>>nit;
	cout<<"Ingrese Nombres: ";
	cin>>nombres;
	cout<<"Ingrese Apellidos:";
	cin>>apellidos;
	cout<<"Ingrese Telefono: ";
	cin>>telefono;
	obj.setNit(nit);
	obj.setNombres(nombres);
	obj.setApellidos(apellidos);
	obj.setTelefono(telefono);
	//obj.mostrar();
	cout<<obj.getNit()<<endl;
	cout<<obj.getNombres()<<endl;
	cout<<obj.getApellidos()<<endl;
	cout<<obj.getTelefono()<<endl;
	
	
}
