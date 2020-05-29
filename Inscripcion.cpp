/*
 * Inscripcion.cpp
 *
 *  Created on: 29 may. 2020
 *      Author: nanis
 */

#include "Inscripcion.h"
#include<iostream>
#include<string>
using namespace std;
#include "Alumno.h"
#include "Profesor.h"
#include "Materia.h"

Inscripcion::Inscripcion() { // @suppress("Class members should be properly initialized")
	// TODO Auto-generated constructor stub

}

Inscripcion::~Inscripcion() {
	// TODO Auto-generated destructor stub
}

void Inscripcion::setFolio(int folio){
	this ->folio= folio;
}

int Inscripcion::getFolio(){
	return folio;
}

void Inscripcion::setNombreInstitucion(string nombreInstitucion){
	this ->nombreInstitucion= nombreInstitucion;
}

string Inscripcion::getNombreInstitucion(){
	return nombreInstitucion;
}
