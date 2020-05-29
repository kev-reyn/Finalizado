/*
 * ProfesorVista.cpp
 *
 *  Created on: 25 may. 2020
 *      Author: nanis
 */

#include "ProfesorVista.h"
#include <stdio.h>
#include <string>
#include "Profesor.h"
#include "ProfesorBS.h"
#include "MedioContacto.h"
#include "ControlEscolar.h"

namespace std {

ProfesorVista::ProfesorVista() {
	// TODO Auto-generated constructor stub

}

ProfesorVista::~ProfesorVista() {
	// TODO Auto-generated destructor stub
}


void ProfesorVista::wRegistraProfesor(){

	string nombre,tipo,valor,primA,segA,rfc;
	int dia, mes,year;
	Profesor *profesor=NULL;
	cout<<"Dame el nombre: ";
	cin>>nombre;
	cout<<"Dame el primer apellido: ";
	cin>>primA;
	cout<<"Dame el segundo apellido: ";
	cin>>segA;
	cout<<"Dame tu dia de nacimiento: ";
	cin>>dia;
	cout<<"Dame tu mes de nacimiento: ";
	cin>>mes;
	cout<<"Dame tu anio de nacimiento: ";
	cin>>year;
	cout<<"Dame tu RFC: ";
	cin>>rfc;

	MedioContacto *medioContacto;
	medioContacto= new MedioContacto();
	cout<<"Dame el tipo de medio: ";
	cin>>tipo;
	cout<<"Dame el valor: ";
	cin>>valor;



	profesor = new Profesor();
	profesor->setNombre(nombre);
	profesor->setPrimA(primA);
	profesor->setSegA(segA);
	profesor->setDia(dia);
	profesor->setMes(mes);
	profesor->setYear(year);
	profesor->setRfc(rfc);

	medioContacto->setTipo(tipo);
	medioContacto->setValor(valor);
	profesor->addContacto(*medioContacto);

	ProfesorBS *profesorBS;
	profesorBS = new ProfesorBS();
	profesorBS -> registraProfesor(*profesor);



}


} /* namespace std */
