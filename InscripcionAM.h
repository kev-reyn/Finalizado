/*
 * InscripcionAM.h
 *
 *  Created on: 29 may. 2020
 *      Author: nanis
 */

#ifndef INSCRIPCIONAM_H_
#define INSCRIPCIONAM_H_
#include <iostream>
#include "Inscripcion.h"

class InscripcionAM {
public:
	InscripcionAM();
	virtual ~InscripcionAM();
	int registrarInscripcion(Inscripcion inscripcion);
	int validarInscripcion(Inscripcion inscripcion);
};

#endif /* INSCRIPCIONAM_H_ */
