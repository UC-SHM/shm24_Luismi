/*
 * Rectangulo.cpp
 *
 *  Created on: 20 feb 2024
 *      Author: Luismi
 */

#include "Rectangulo.h"
#include <stdio.h>
#include <iostream>

Rectangulo::Rectangulo() {
	// TODO Auto-generated constructor stub
	l=0;
	a=0;
	lastArea=0;
	std::cout << "Estoy en el constructor 1" << std::endl;

}

using namespace std;

Rectangulo::Rectangulo(float nl, float na) {
	// TODO Auto-generated constructor stub
	l=nl;
	a=na;
	cout << "Estoy en el constructor 2" << endl;

}

float Rectangulo::area(){
	lastArea=l*a;
	return lastArea;

}
Rectangulo::~Rectangulo() {
	// TODO Auto-generated destructor stub
	cout << "Estoy en el destructor" << endl;
}

