/*
 * Asignacion.h
 *
 *  Created on: 29 may. 2020
 *      Author: nanis
 */
#include<string>
#ifndef ASIGNACION_H_
#define ASIGNACION_H_
using namespace std;

class Asignacion {
private:
	string nombreMateria;
	int grado;
	int claveMateria;
public:
	Asignacion();
	virtual ~Asignacion();
	void setGrado(int grado);
	int getGrado();
	void setNombreMateria(string nombreMateria);
	string getNombreMateria();
	void setClaveMateria(int claveMateria);
	int getClaveMateria();
};

#endif /* ASIGNACION_H_ */
