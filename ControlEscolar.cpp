/*
 * ControlEscolar.cpp
 *
 *  Created on: 25 may. 2020
 *      Author: nanis
 */

#include "ControlEscolar.h"
#include <iostream>
#include "ProfesorVista.h"
#include "Menu.h"
#include "Profesor.h"


ControlEscolar::ControlEscolar() {
	// TODO Auto-generated constructor stub

}

ControlEscolar::~ControlEscolar() {
	// TODO Auto-generated destructor stub
}

int main(){

	char r;
	do{


	Menu *menu;
	menu = new Menu();
	menu->muestrameMenu();

	cout<<"Quieres ver de nuevo el menu? s/n"<<endl;
	cin>>r;



	}while(r=='s');

}
