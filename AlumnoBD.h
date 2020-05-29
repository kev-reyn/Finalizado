/*
 * AlumnoBD.h
 *
 *  Created on: 28 may. 2020
 *      Author: nanis
 */

#include "Alumno.h"
#ifndef ALUMNOBD_H_
#define ALUMNOBD_H_

class AlumnoBD {
public:
	AlumnoBD();
	virtual ~AlumnoBD();
	int guardaAlumno(Alumno alumno);
	int validaAlumno(Alumno alumno);
};

#endif /* ALUMNOBD_H_ */
