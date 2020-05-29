/*
 * VistaAlumno.cpp
 *
 *  Created on: 28 may. 2020
 *      Author: nanis
 */

#include<iostream>
#include<string>
#include"Alumno.h"
#include"AlumnoBs.h"
#include "MedioContacto.h"
#include "VistaAlumno.h"

using namespace std;
VistaAlumno::VistaAlumno() {
	// TODO Auto-generated constructor stub

}

VistaAlumno::~VistaAlumno() {
	// TODO Auto-generated destructor stub
}
void VistaAlumno::registraAlumno(){
	Alumno *alumno=0;
	string nombre,primerAp,segundoAp,carrera,tipo,nombrecont;
	int dia,mes,year,boleta;
	cout<<"Ingresa el nombre del alumno: ";
	cin>>nombre;
	cout<<"Ingresa el Primer Apellido: ";
	cin>>primerAp;
	cout<<"Ingresa el Segundo Apellido: ";
	cin>>segundoAp;
	cout<<"Ingresa el dia en que nacio: ";
	cin>>dia;
	cout<<"Ingresa el mes en el que nacio: ";
	cin>>mes;
	cout<<"Ingresa el año en el que nacio: ";
	cin>>year;
	cout<<"Ingresa el id del alumno: ";
	cin>>boleta;
	cout<<"Ingresa el grado del alumno: ";
	cin>>carrera;

	MedioContacto *medioContacto;
	medioContacto = new MedioContacto;
	cout<<"Ingresa el medio de contacto con el alumno: ";
	cin>>tipo;
	cout<<"Ingresa el valor del contacto: ";
	cin>>nombrecont;
	alumno=new Alumno();
	alumno->setNombre(nombre);
	alumno->setPrimerApellido(primerAp);
	alumno->setSegundoApellido(segundoAp);
	alumno->setDia(dia);
	alumno->setMes(mes);
	alumno->setYear(year);
	alumno->setBoleta(boleta);
	alumno->setCarrera(carrera);
	medioContacto->setTipo(tipo);
	medioContacto->setValor(nombrecont);
	alumno->agregarcontacto(*medioContacto);
	AlumnoBs * alumnoBs;
	alumnoBs=new AlumnoBs();
	alumnoBs->registraAlumno(*alumno);
}
