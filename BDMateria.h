/*
 * BDMateria.h
 *
 *  Created on: 28 may. 2020
 *      Author: nanis
 */

#include<iostream>
#include<string>
#include"Materia.h"
#ifndef BDMATERIA_H_
#define BDMATERIA_H_
using namespace std;

class BDMateria {
public:
	BDMateria();
	virtual ~BDMateria();
	int guardaMateria(Materia materia);
	int validaMateria(Materia materia);


};

#endif /* BDMATERIA_H_ */
