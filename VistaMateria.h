/*
 * VistaMateria.h
 *
 *  Created on: 28 may. 2020
 *      Author: nanis
 */


#include<iostream>
#include<string>
#include"Materia.h"
#ifndef VISTAMATERIA_H_
#define VISTAMATERIA_H_
using namespace std;


class VistaMateria :public Materia {
public:
	VistaMateria();
	virtual ~VistaMateria();
	void wRegistraMateria();
};

#endif /* VISTAMATERIA_H_ */
