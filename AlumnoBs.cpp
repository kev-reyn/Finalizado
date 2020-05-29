/*
 * AlumnoBs.cpp
 *
 *  Created on: 28 may. 2020
 *      Author: nanis
 */

#include<iostream>
#include<string>
#include"AlumnoBD.h"
#include "AlumnoBs.h"
using namespace std;
AlumnoBs::AlumnoBs() {
	// TODO Auto-generated constructor stub

}

AlumnoBs::~AlumnoBs() {
	// TODO Auto-generated destructor stub
}
int AlumnoBs::registraAlumno(Alumno alumno){
	int validar;
	validar=validaAlumno(alumno);
	if(validar==1){
		AlumnoBD *alumnoBD;
		alumnoBD= new AlumnoBD();
		int registro;
		registro=alumnoBD->guardaAlumno(alumno);
		if(registro==1){
			return registro;
		}
	}else {
		return 0;
	}return 1;

}
int AlumnoBs::validaAlumno(Alumno alumno){
	cout<<"\n\tPaso por Validacion\n"<<endl;
return 1;
}
