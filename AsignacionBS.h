/*
 * AsignacionBS.h
 *
 *  Created on: 29 may. 2020
 *      Author: nanis
 */

#ifndef ASIGNACIONBS_H_
#define ASIGNACIONBS_H_
#include "Asignacion.h"

class AsignacionBS {
public:
	AsignacionBS();
	virtual ~AsignacionBS();
	int registrarAsignacionMateria(Asignacion asignacion);
	int validarAsignacionMateria(Asignacion asignacion);
};

#endif /* ASIGNACIONBS_H_ */
