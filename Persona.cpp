#include "Persona.h"
#include <string>

using namespace std;

Persona::Persona(int clave, string nombre){
	this -> clave = clave;
	this -> nombre = nombre;
	this -> puntuacion = 0;
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

void Persona::setPuntuacion(int puntuacion){
	this -> puntuacion = puntuacion;
}

void Persona::setNombre(string nombre){
	this -> nombre = nombre;
}

void Persona::setClave(int clave){
	this -> clave = clave;
}
