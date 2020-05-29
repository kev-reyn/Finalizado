/*
 * InscripcionBD.h
 *
 *  Created on: 29 may. 2020
 *      Author: nanis
 */

#ifndef INSCRIPCIONBD_H_
#define INSCRIPCIONBD_H_
#include <iostream>
#include "Inscripcion.h"

class InscripcionBD {
public:
	InscripcionBD();
	virtual ~InscripcionBD();
	int guardaInscripcion(Inscripcion inscripcion);
};

#endif /* INSCRIPCIONBD_H_ */
