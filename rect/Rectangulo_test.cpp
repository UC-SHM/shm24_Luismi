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

#include <gtest/gtest.h>	// DEfiniciones de google test
#include <gmock/gmock.h>


// Verifica calculo area
	TEST(Rectangulo, testArea1) {
		Rectangulo r;

		r.setParam(5, 3);
		ASSERT_EQ(r.area(),15);
	}

// Verifica lastArea
	TEST(Rectangulo, test_latArea) {
		Rectangulo r;

		r.setParam(6, 8);
		int area=r.area();
		ASSERT_EQ(area, r.lastArea);
	}
