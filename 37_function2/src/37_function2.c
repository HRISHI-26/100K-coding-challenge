/*
 ============================================================================
 Name        : 37_function2.c
 Author      : Hrishinandan N
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void sum(int, int);

int main(void) {

	int num1, num2;
	printf("Enter 2 numbers: ");
	scanf("%d%d", &num1,&num2);
	sum(num1, num2);
	return EXIT_SUCCESS;
}

void sum(int number1, int number2){
	int result;
	result = number1 + number2;
	printf("Sum: %d", result);
}
