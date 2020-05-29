/*
 * BSMateria.cpp
 *
 *  Created on: 28 may. 2020
 *      Author: nanis
 */

#include "BDMateria.h"
#include "BSMateria.h"


using namespace std;


BSMateria::BSMateria() {
	// TODO Auto-generated constructor stub

}

BSMateria::~BSMateria() {
	// TODO Auto-generated destructor stub
}

int BSMateria::registraMateria(Materia materia){
	int rv, rm;
	rv = validarMateria(materia);
	if(rv == 1){
		BDMateria *bdmateria;
		bdmateria = new BDMateria ();
		rm= bdmateria->guardaMateria(materia);
		if(rm == 1){
			return rm;
		}
	}else{
			return -1;
		}

		return 1;
	}

	int BSMateria::validarMateria(Materia materia){
		cout<<"\n\tPaso por Validacion\n"<<endl;
	return 1;
	}
