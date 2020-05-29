/*
 * ProfesorBS.cpp
 *
 *  Created on: 25 may. 2020
 *      Author: nanis
 */

#include "ProfesorBS.h"
#include "ProfesorBD.h"
#include <iostream>

namespace std {

ProfesorBS::ProfesorBS() {
	// TODO Auto-generated constructor stub

}

ProfesorBS::~ProfesorBS() {
	// TODO Auto-generated destructor stub
}

int ProfesorBS::registraProfesor(Profesor profesor){

	int respVal;
	respVal=validaProfesor(profesor);
	if(respVal==1){
	ProfesorBD *profesorBD;
	profesorBD = new ProfesorBD();
	int respRegProf;
	respRegProf=profesorBD->guardaProfesor(profesor);
	if(respRegProf==1){
		return respRegProf;
	}
}else{


	return -1;
}
	return 1;
}

int ProfesorBS::validaProfesor(Profesor profesor){

	cout<<"\n\tPaso por Validacion\n"<<endl;
return 1;
}


} /* namespace std */
