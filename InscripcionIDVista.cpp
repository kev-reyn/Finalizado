/*
 * InscripcionIDVista.cpp
 *
 *  Created on: 29 may. 2020
 *      Author: nanis
 */

#include "InscripcionIDVista.h"
#include "InscripcionAM.h"
#include "Inscripcion.h"
#include "Alumno.h"
#include "Profesor.h"
#include "Materia.h"
#include<string>
#include<iostream>
using namespace std;


InscripcionIDVista::InscripcionIDVista() {
	// TODO Auto-generated constructor stub

}

InscripcionIDVista::~InscripcionIDVista() {
	// TODO Auto-generated destructor stub
}

void InscripcionIDVista::ingresarInscripcion(){
	string nombre, primerApellido, segundoApellido, primA, segA, nombreMateria, nombreInstitucion;
	int dia, mes, year, numGrado, claveMateria, folio;
	Inscripcion *inscripcion=0;
	cout <<"Ingresa el nombre el alumno"<<endl;
	cin >>nombre;
	cout <<"Ingresa su primer apellido"<<endl;
	cin >>primerApellido;
	cout <<"Ingresa su segundo apellido"<<endl;
	cin >>segundoApellido;
	cout <<"Ingresa su dia de nacimiento"<<endl;
	cin >>dia;
	cout <<"Ingresa su mes de nacimiento"<<endl;
	cin >>mes;
	cout <<"Ingresa su anio de nacimiento"<<endl;
	cin >>year;
	cout <<"Ingresa el grado donde esta ahora"<<endl;
	cin >>numGrado;
	cout <<"Ingresa el nombre del profesor"<<endl;
	cin >>nombre;
	cout <<"Ingresa su primer apellido"<<endl;
	cin >>primA;
	cout <<"Ingresa su segunda apellido"<<endl;
	cin >>segA;
	cout <<"Ingresa el nombre de la materia"<<endl;
	cin >>nombreMateria;
	cout <<"Ingresa la clave de la materia"<<endl;
	cin >>claveMateria;
	cout <<"Para terminar la inscripcion introduzca los siguientes campos:"<<endl;
	cout <<"Folio"<<endl;
	cin >>folio;
	cout <<"Nombre de la institucion"<<endl;
	cin >>nombreInstitucion;



	inscripcion = new Inscripcion();
	inscripcion->setFolio(folio);
	inscripcion->setNombreInstitucion(nombreInstitucion);



	InscripcionAM *inscripcionAM;
	inscripcionAM = new InscripcionAM();
	inscripcionAM ->registrarInscripcion(*inscripcion);


}
