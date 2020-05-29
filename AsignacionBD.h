/*
 * AsignacionBD.h
 *
 *  Created on: 29 may. 2020
 *      Author: nanis
 */

#ifndef ASIGNACIONBD_H_
#define ASIGNACIONBD_H_
#include "Asignacion.h"

class AsignacionBD {
public:
	AsignacionBD();
	virtual ~AsignacionBD();
	int guardaAsignacion(Asignacion asignacion);
};

#endif /* ASIGNACIONBD_H_ */
