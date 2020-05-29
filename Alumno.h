/*
 * Alumno.h
 *
 *  Created on: 28 may. 2020
 *      Author: nanis
 */

#include"MedioContacto.h"
#include<string>
#ifndef ALUMNO_H_
#define ALUMNO_H_
using namespace std;
class Alumno {
private:
	string nombre;
	string primerApellido;
	string segundoApellido;
	int dia;
	int mes;
	int year;
	string nombredecarrera;
	int boleta;
	MedioContacto mediocontacto[2];
public:
	Alumno();
	virtual ~Alumno();
	void setNombre(string nombre);
	string getNombre();
	void setPrimerApellido(string primerApellido);
	string getPrimerApellido();
	void setSegundoApellido(string segundoApellido);
	string getSegundoApellido();
	void setDia(int dia);
	int getDia();
	void setMes(int mes);
	int getMes();
	void setYear(int year);
	int getYear();
	void setCarrera(string nombredecarrera);
	string getCarrera();
	void setBoleta(int boleta);
	int getBoleta();
	void agregarcontacto(MedioContacto);
};

#endif /* ALUMNO_H_ */
