/*
 * Inscripcion.h
 *
 *  Created on: 29 may. 2020
 *      Author: nanis
 */

#ifndef INSCRIPCION_H_
#define INSCRIPCION_H_
#include<iostream>
#include<string>
using namespace std;
#include "Alumno.h"
#include "Profesor.h"
#include "Materia.h"

class Inscripcion {
private:
	int folio;
	string nombreInstitucion;
public:
	Inscripcion();
	virtual ~Inscripcion();
	void setFolio(int folio);
	int getFolio();
	void setNombreInstitucion(string nombreInstitucion);
	string getNombreInstitucion();
};

#endif /* INSCRIPCION_H_ */
