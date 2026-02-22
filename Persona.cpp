#include <iostream>
using namespace std;

class Persona {
	protected : string cui, nombres, apellidos, direccion, fecha_nacimiento;
	bool genero;
	int telefono;
		
	protected :
		Persona (){
		}
		Persona(string c, string nom,string ape,string dir,string fn, int tel, bool gen){
			cui = c;
			nombres = nom;
			apellidos = ape;
			direccion = dir;
			telefono = tel;
			fecha_nacimiento = fn;
			genero = gen;
		}
//Metodos (CRUD)
	void crear();
	void leer();
	void actualizar();
	void borrar();
		
	
};
