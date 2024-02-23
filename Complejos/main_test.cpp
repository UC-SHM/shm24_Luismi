/*
 * main_test.cpp
 *
 *  Created on: 23 feb 2024
 *      Author: Luismi
 */

#ifdef TEST
#include <gtest/gtest.h>

int main(int narg, char **arg) {
	::testing::InitGoogleTest(&narg, arg);
	return RUN_ALL_TESTS();
}
#endif



