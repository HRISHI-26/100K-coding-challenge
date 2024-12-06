/*
 ============================================================================
 Name        : 3_sumOfValues.c
 Author      : Hrishinandan N
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int num1, num2, sum;
	printf("Enter number 1: ");
	scanf("%d", &num1);
	printf("Enter number 2: ");
	scanf("%d", &num2);
	sum = num1 + num2;
	printf("Sum: %d",sum);

	return EXIT_SUCCESS;
}
