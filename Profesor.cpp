/*
 * Profesor.cpp
 *
 *  Created on: 25 may. 2020
 *      Author: nanis
 */

#include "Profesor.h"
#include <iostream>

using namespace std;

Profesor::Profesor() { // @suppress("Class members should be properly initialized")
	// TODO Auto-generated constructor stub
}



Profesor::~Profesor() {
	// TODO Auto-generated destructor stub
}

void Profesor::setNombre(string nombre){
	this-> nombre=nombre;
}

string Profesor::getNombre(){
	return nombre;
}

void Profesor::setPrimA(string primA){
	this-> primA=primA;
}

string Profesor::getPrimA(){
	return primA;
}

void Profesor::setSegA(string segA){
	this-> segA=segA;
}

string Profesor::getSegA(){
	return segA;
}

void Profesor::setDia(int dia){
	this->dia=dia;
}

int Profesor::getDia(){
	return dia;
}

void Profesor::setMes(int mes){
	this->mes=mes;
}

int Profesor::getMes(){
	return mes;
}

void Profesor::setYear(int year){
	this->year=year;
}

int Profesor::getYear(){
	return year;
}

void Profesor::setRfc(string rfc){
	this->rfc=rfc;
}

string Profesor::getRfc(){
	return rfc;
}

void Profesor::addContacto(MedioContacto medio){
	this->mediocontacto[2]=medio;
}
