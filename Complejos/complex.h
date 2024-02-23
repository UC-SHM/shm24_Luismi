/*
 * complex.h
 *
 *  Created on: 23 feb 2024
 *      Author: Luismi
 */
#ifndef COMPLEX_H_
#define COMPLEX_H_

class Complex{
	float real;
	float img;
public:
	float mod();
	void set(float vreal, float vimg);
	void get(float &vreal, float &vimg);

	Complex operator+(const Complex &rhs);
	Complex operator*(const Complex &rhs);
	Complex &operator=(const Complex &rhs);
	Complex(float vreal, float vimg);
	Complex();

	virtual ~Complex();
};

#endif


