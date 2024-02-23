/*
 * complex.cpp
 *
 *  Created on: 23 feb 2024
 *      Author: Luismi
 */

#include "complex.h"
#include <cmath>
#include <iostream>

using namespace std;

float Complex::mod(){
	double mod;
	mod= (double)(real*real) + (double)(img*img);
	return ((float)sqrt(mod));
}

void Complex::set(float vreal, float vimg){
	real=vreal;
	img=vimg;
}




