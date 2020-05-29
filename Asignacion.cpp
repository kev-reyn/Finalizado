/*
 * Asignacion.cpp
 *
 *  Created on: 29 may. 2020
 *      Author: nanis
 */

#include "Asignacion.h"

Asignacion::Asignacion() { // @suppress("Class members should be properly initialized")
	// TODO Auto-generated constructor stub

}

Asignacion::~Asignacion() {
	// TODO Auto-generated destructor stub
}


void Asignacion::setNombreMateria(string nombreMateria){
	this->nombreMateria=nombreMateria;
}

string Asignacion::getNombreMateria(){
	return this->nombreMateria;
}


void Asignacion::setGrado(int grado){
	this->grado=grado;
}

int Asignacion::getGrado(){
	return this->grado;
}


void Asignacion::setClaveMateria(int claveMateria){
	this->claveMateria=claveMateria;
}

int Asignacion::getClaveMateria(){
	return this->claveMateria;
}
