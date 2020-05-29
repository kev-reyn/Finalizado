/*
 * InscripcionBD.cpp
 *
 *  Created on: 29 may. 2020
 *      Author: nanis
 */

#include "InscripcionBD.h"
#include "Inscripcion.h"
#include <iostream>
using namespace std;

InscripcionBD::InscripcionBD() {
	// TODO Auto-generated constructor stub

}

InscripcionBD::~InscripcionBD() {
	// TODO Auto-generated destructor stub
}

int InscripcionBD::guardaInscripcion(Inscripcion inscripcion){
	int res;
	res = 1;
	if(res==1){
	cout<<"\n\tSe guardo correctamente\n";
	return res;
	}else
		return 0;
}
