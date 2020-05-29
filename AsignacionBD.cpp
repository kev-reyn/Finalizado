/*
 * AsignacionBD.cpp
 *
 *  Created on: 29 may. 2020
 *      Author: nanis
 */

#include<iostream>
#include "AsignacionBD.h"
#include "Asignacion.h"
using namespace std;

AsignacionBD::AsignacionBD() {
	// TODO Auto-generated constructor stub

}

AsignacionBD::~AsignacionBD() {
	// TODO Auto-generated destructor stub
}

int AsignacionBD::guardaAsignacion(Asignacion asignacion){
	int res;
	res = 1;
	if(res==1){
	cout<<"\n\tSe guardo correctamente\n";
	return res;
	}else
		return 0;
}
