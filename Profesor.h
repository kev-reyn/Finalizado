/*
 * Profesor.h
 *
 *  Created on: 25 may. 2020
 *      Author: nanis
 */

#ifndef PROFESOR_H_
#define PROFESOR_H_
#include "MedioContacto.h"
#include <string>

using namespace std;


class Profesor {
private:
	string nombre,primA,segA,rfc,materia;
	int dia,mes,year;
	MedioContacto mediocontacto[2];
public:
	Profesor();
	virtual ~Profesor();
	void setNombre(string nombre);
	string getNombre();
	void setPrimA(string primA);
	string getPrimA();
	void setSegA(string segA);
	string getSegA();
	void setDia(int dia);
	int getDia();
	void setMes(int mes);
	int getMes();
	void setYear(int year);
	int getYear();
	void setRfc(string rfc);
	string getRfc();
	void addContacto(MedioContacto);
};


#endif /* PROFESOR_H_ */
