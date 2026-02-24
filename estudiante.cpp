#include "Persona.cpp"
#include <iostream>
using namespace std;
class estudiante : Persona {
	private : string carnet;
	
	public :
	estudiante (){
	}
	estudiante (string c,string nom,string ape,string dir,string fn,int tel,bool gen,string nt) : Persona(c,nom,ape,dir,fn,tel,gen){
		carnet = nt;
	}
	void setCui(string c){cui = c;}
	void setCarnet(string nt){carnet = nt;}
	void setNombres(string nom){nombres = nom;}
	void setApellidos(string ape){apellidos = ape;}
	void setDireccion(string dir){direccion = dir;}
	void setFecha_Nacimiento(string fn){fecha_nacimiento = fn;}
	void setTelefono(int tel){telefono = tel;}
	void setGenero(bool gen){genero = gen;}
	
	string getCui(){return cui;}
	string getCarnet(){return carnet;}
	string getNombres(){return nombres;}
	string getApellidos(){return apellidos;}
	string getDireccion(){return direccion;}
	int getTelefono(){return telefono;}
	string getFecha_Nacimiento(){return fecha_nacimiento;}
	bool getGenero(){return genero;}
	
	void mostrar(){
		cout<<""<<endl;
		cout<<cui<<","<<carnet<<","<<nombres<<","<<apellidos<<","<<direccion<<","<<telefono<<","<<fecha_nacimiento<<","<<genero<<endl;
		
	}
};
