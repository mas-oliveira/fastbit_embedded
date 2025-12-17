/*
 * main.c
 *
 *  Created on: 17/12/2025
 *      Author: marcooliveira
 */

#include <stdio.h>

int main (void) {
	float number1, number2, number3;
	float average;

	printf("Enter the three numbers:");
	scanf("%f %f %f", &number1, &number2, &number3);

	average = (number1 + number2 + number3) / 3;
	printf("Average = %f\n", average);

	return 0;
}
