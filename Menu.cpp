/*
 * Menu.cpp
 *
 *  Created on: 25 may. 2020
 *      Author: nanis
 */

#include "Menu.h"
#include <iostream>
#include <stdio.h>
#include "ProfesorVista.h"
#include "VistaAlumno.h"
#include "VistaMateria.h"
#include "InscripcionIDVista.h"
#include "AsignacionVista.h"
#include <stdlib.h>
#include "Profesor.h"



using namespace std;

Menu::Menu() {
	// TODO Auto-generated constructor stub

}

Menu::~Menu() {
	// TODO Auto-generated destructor stub
}

void Menu::muestrameMenu(){




	int resp;

	cout<<"\tLas opcione son:"<<endl;
	cout<<"\t1.-REGISTRO DE PROFESORES"<<endl;
	cout<<"\t2.-REGISTRO DE ALUMNOS"<<endl;
	cout<<"\t3.-REGISTRAR MATERIA"<<endl;
	cout<<"\t4.-INSCRIBIR ALUMNO A CRUSO"<<endl;
	cout<<"\t5.-ASIGNAR"<<endl;
	cin>>resp;

	switch(resp){
	case 1:
		ProfesorVista *profesorVista;
		profesorVista = new ProfesorVista;
		profesorVista ->wRegistraProfesor();
		break;
	case 2:

		VistaAlumno *vistaAlumno;
		vistaAlumno = new VistaAlumno;
		vistaAlumno->registraAlumno();

		break;
	case 3:

		VistaMateria *vistaMateria;
		vistaMateria = new VistaMateria;
		vistaMateria->wRegistraMateria();
		break;
	case 4:
		InscripcionIDVista *inscripcionIDVista;
		inscripcionIDVista = new InscripcionIDVista;
		inscripcionIDVista->ingresarInscripcion();
		break;
	case 5:
		AsignacionVista *asignacionVista;
		asignacionVista = new AsignacionVista;
		asignacionVista->registrarAsignacion();
	}




}

