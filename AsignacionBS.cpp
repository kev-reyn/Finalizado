/*
 * AsignacionBS.cpp
 *
 *  Created on: 29 may. 2020
 *      Author: nanis
 */

#include<iostream>
#include "AsignacionBS.h"
#include "Asignacion.h"
#include "AsignacionBD.h"

AsignacionBS::AsignacionBS() {
	// TODO Auto-generated constructor stub

}

AsignacionBS::~AsignacionBS() {
	// TODO Auto-generated destructor stub
}

int AsignacionBS::registrarAsignacionMateria(Asignacion asignacion){
	int respuestaV, respuestaA;
	respuestaV=1;
	if(respuestaV == 1){
		AsignacionBD *asignacionBD;
		asignacionBD = new AsignacionBD();
		respuestaA = asignacionBD->guardaAsignacion(asignacion);

		if(respuestaA == 1){
			return respuestaA;
		}else{
			return 0;
		}
		return 1;
	}
	return 0;
}

int AsignacionBS::validarAsignacionMateria(Asignacion asignacion){
	cout<<"\n\tPaso por Validacion\n"<<endl;
return 1;
}
