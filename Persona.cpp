#include "Persona.h"
#include <string>

using namespace std;

Persona::Persona(int pclave, string pnombre){
	clave = clave;
	nombre = nombre;
	puntuacion = 0;
}
	
//getters

int Persona::getPuntuacion(){
	return puntuacion;
}

int Persona::getNombre(){
	return nombre;
}

int Persona::getClave(){
	return clave;
}

//setters

void Persona::setPuntuacion(int ppuntuacion){
	 puntuacion = ppuntuacion;
}

void Persona::setNombre(string pnombre){
	nombre = pnombre;
}

void Persona::setClave(int pclave){
	clave = clave;
}
