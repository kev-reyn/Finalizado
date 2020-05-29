/*
 * BSMateria.h
 *
 *  Created on: 28 may. 2020
 *      Author: nanis
 */

#include<iostream>
#include<string>
#include"Materia.h"

#ifndef BSMATERIA_H_
#define BSMATERIA_H_
using namespace std;

class BSMateria {
private:
	int validarMateria(Materia materia);
public:
	BSMateria();
	virtual ~BSMateria();
	int registraMateria(Materia materia);
};

#endif /* BSMATERIA_H_ */
