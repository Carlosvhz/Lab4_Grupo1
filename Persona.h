#ifndef PERSONA_H
#define PERSONA_H

#include <string>

using namespace std;

class Persona{
	private:
		int puntuacion;
		string nombre;
		int clave;

	public:
		//Consctructores
		Persona(int clave, string nombre);
		//Getters
		int getPuntuacion();
		int getClave();
		string getNombre();

		//Setters
		void setPuntuacion(int puntuacion);
		void setClave(int clave);
		void setNombre(string nombre);
};

#endif
