/*
 ============================================================================
 Name        : 36_function.c
 Author      : Hrishinandan N
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void sum();

int main(void) {

	sum();

	return EXIT_SUCCESS;
}

void sum(){
	int num1, num2, result;
	printf("Enter 2 numbers: \n");
	scanf("%d%d", &num1,&num2);

	result = num1 + num2 ;
	printf("Sum: %d",result);
}
