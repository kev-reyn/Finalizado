/*
 * MedioContacto.cpp
 *
 *  Created on: 25 may. 2020
 *      Author: nanis
 */

#include "MedioContacto.h"
#include <iostream>

namespace std {

MedioContacto::MedioContacto() {
	// TODO Auto-generated constructor stub

}

MedioContacto::~MedioContacto() {
	// TODO Auto-generated destructor stub
}

void MedioContacto::setTipo(string tipo){
	this->tipo=tipo;
}

string MedioContacto::getTipo(){
	return tipo;
}

void MedioContacto::setValor(string valor){
	this->valor=valor;
}

string MedioContacto::getValor(){
	return valor;
}


} /* namespace std */
