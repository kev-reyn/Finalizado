/*
 * AsignacionVista.cpp
 *
 *  Created on: 29 may. 2020
 *      Author: nanis
 */

#include<iostream>
#include<string>
#include "AsignacionVista.h"
#include "AsignacionBS.h"
#include "AsignacionBD.h"
#include "Profesor.h"
#include "Materia.h"
using namespace std;

AsignacionVista::AsignacionVista() {
	// TODO Auto-generated constructor stub

}

AsignacionVista::~AsignacionVista() {
	// TODO Auto-generated destructor stub
}

void AsignacionVista::registrarAsignacion(){
	string nombre, primerApe, segundoApe, nombreMateria;
	int anio, mes, dia, claveMateria, grado;

	Asignacion *asignacion=0;

	cout<<"Ingrese el nombre del profesor:\n";
	cin>>nombre;
	cout<<"Ingrese su primer apellido:\n";
	cin>>primerApe;
	cout<<"Ingrese su segundo apellido:\n";
	cin>>segundoApe;
	cout<<"Ingrese su fecha de nacimiento: \n";
	cout<<"Dia:\n";
	cin>>dia;
	cout<<"Mes:\n";
	cin>>mes;
	cout<<"Año:\n";
	cin>>anio;

	cout<<"Ingrese nombre de la materia:\n";
	cin>>nombreMateria;

	cout<<"Ingrese grado:\n";
	cin>>grado;

	cout<<"Ingrese clave:\n";
	cin>>claveMateria;


	asignacion = new Asignacion();
	asignacion->setNombreMateria(nombreMateria);
	asignacion->setGrado(grado);
	asignacion->setClaveMateria(claveMateria);

	AsignacionBS *asignacionBS;
	asignacionBS = new AsignacionBS();
	asignacionBS->registrarAsignacionMateria(*asignacion);
}
