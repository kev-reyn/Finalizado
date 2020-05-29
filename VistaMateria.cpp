/*
 * VistaMateria.cpp
 *
 *  Created on: 28 may. 2020
 *      Author: nanis
 */

#include<iostream>
#include<string>
#include "VistaMateria.h"
#include"Materia.h"
#include "BSMateria.h"
using namespace std;

VistaMateria::VistaMateria() {
	// TODO Auto-generated constructor stub

}

VistaMateria::~VistaMateria() {
	// TODO Auto-generated destructor stub
}

void VistaMateria::wRegistraMateria(){
	Materia *materia;
	string nombreMateria;
	int claveMateria;
	int numGrado;

	cout<<"Ingresa la Clave de la Materia:";
	cin>>claveMateria;

	cout<<"Ingresa el Grado de la Materia:";
	cin>>numGrado;

	cout<<"Ingresa el Nombre de la Materia:";
	cin>>nombreMateria;

	materia = new Materia();
	materia->setClaveMateria(claveMateria);
	materia->setNumGrado(numGrado);
	materia->setNombreMateria(nombreMateria);



	BSMateria * bsmateria;
	bsmateria = new BSMateria();
	bsmateria->registraMateria(*materia);

}
