/*
 ============================================================================
 Name        : 4_avgOfNumbers.c
 Author      : Hrishinandan N
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	float num1, num2, num3, avg;
	printf("Enter number 1:");
	scanf("%f",&num1);
	printf("Enter number 2:");
	scanf("%f",&num2);
	printf("Enter number 3:");
	scanf("%f",&num3);

	avg = (num1 + num2 + num3)/3;

	printf("Average: %f",avg);


	return EXIT_SUCCESS;
}