/*
 * main.c
 *
 *  Created on: 16/12/2025
 *      Author: marcooliveira
 */

#include <stdio.h>

int main(void)
{
	double number = 45.78976834578;
	printf("Number => %.10lf\n", number);
	printf("Number => %0.2lf\n", number);
	printf("Number => %le\n", number);
	printf("Number => %0.2le\n", number);

	double chargeE = -1.60217662e-19;
	printf("Number => %.10lf\n", chargeE);
	printf("Number => %0.2lf\n", chargeE);
	printf("Number => %le\n", chargeE);
	printf("Number => %0.2le\n", chargeE);

	return 0;
}
