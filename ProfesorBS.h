/*
 * ProfesorBS.h
 *
 *  Created on: 25 may. 2020
 *      Author: nanis
 */

#ifndef PROFESORBS_H_
#define PROFESORBS_H_
#include <iostream>
#include "Profesor.h"

namespace std {


class ProfesorBS {
private:
	int validaProfesor(Profesor profesor);
public:
	ProfesorBS();
	virtual ~ProfesorBS();
	int registraProfesor(Profesor profesor);

};

} /* namespace std */

#endif /* PROFESORBS_H_ */
