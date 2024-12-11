/*
 ============================================================================
 Name        : 39_function4.c
 Author      : Hrishinandan N
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int sum(int, int);

int main(void) {

	int num1, num2, result;

	printf("Enter 2 numbers:");
	scanf("%d%d", &num1,&num2);
	result = sum(num1, num2);
	printf("Sum: %d", result);

	return EXIT_SUCCESS;
}

int sum(int num1, int num2){

	int result;
	result = num1 + num2;
	return result;
}
