/*
 * Alumno.cpp
 *
 *  Created on: 28 may. 2020
 *      Author: nanis
 */

#include "Alumno.h"
#include"VistaAlumno.h"
#include"AlumnoBs.h"
#include<string>
#include<iostream>
using namespace std;
Alumno::Alumno() { // @suppress("Class members should be properly initialized")
	// TODO Auto-generated constructor stub

}

Alumno::~Alumno() {
	// TODO Auto-generated destructor stub
}
void Alumno::setNombre(string nombre){
	this->nombre=nombre;
}
string Alumno::getNombre(){
	return nombre;
}
void Alumno::setPrimerApellido(string primerApellido){
	this->primerApellido=primerApellido;
}
string Alumno::getPrimerApellido(){
	return primerApellido;
}
void Alumno::setSegundoApellido(string segundoApellido){
	this->segundoApellido=segundoApellido;
}
string Alumno::getSegundoApellido(){
	return segundoApellido;
}
void Alumno::setDia(int dia){
	this->dia=dia;
}
int Alumno::getDia(){
	return dia;
}
void Alumno::setMes(int mes){
	this->mes=mes;
}
int Alumno::getMes(){
	return mes;
}
void Alumno::setYear(int year){
	this->year=year;
}
int Alumno::getYear(){
	return year;
}
void Alumno::setCarrera(string nombredecarrera){
	this->nombredecarrera=nombredecarrera;
}
string Alumno::getCarrera(){
	return nombredecarrera;
}
void Alumno::setBoleta(int boleta){
	this->boleta=boleta;
}
int Alumno::getBoleta(){
	return boleta;
}
void Alumno::agregarcontacto(MedioContacto medio){
	this->mediocontacto[2]=medio;
}
