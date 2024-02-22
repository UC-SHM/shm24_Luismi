/*
 * Rectangulo_test.cpp
 *
 *  Created on: 20 feb 2024
 *      Author: Luismi
 */

#include "Rectangulo.h"
#include <stdio.h>
#include <iostream>

using namespace std;

#ifdef TEST
int main(){
	Rectangulo a, b(2,3);
    //Rectangle r;
    r.setParam(10, 2);
    printf("\n Ultimo area: ")
	std::cout << a.area() << " " << b.area() << std::endl;
	return 0;

}
#endif
