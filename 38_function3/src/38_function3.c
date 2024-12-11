/*
 ============================================================================
 Name        : 38_function3.c
 Author      : Hrishinandan N
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int sum();


int main(void) {

	int result = 0;
	result = sum();
	printf("Sum: %d", result);

	return EXIT_SUCCESS;
}

int sum(){

	int num1, num2, result;
	printf("Enter 2 numbers: ");
	scanf("%d%d", &num1,&num2);
	result = num1 + num2;
	return result;
}
