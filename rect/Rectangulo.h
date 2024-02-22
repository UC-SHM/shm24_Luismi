/*
 * Rectangulo.h
 *
 *  Created on: 20 feb 2024
 *      Author: Luismi
 */

#ifndef RECTANGULO_H_
#define RECTANGULO_H_

class Rectangulo {
	float l, a;
public:
	Rectangulo();
	Rectangulo(float nl, float na);

	float lastArea;
    void setParam(float ancho, float alto){
    	l=ancho;
    	a=alto;
    }
    float area();
	virtual ~Rectangulo();
};

#endif /* RECTANGULO_H_ */
