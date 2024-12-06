/*
 ============================================================================
 Name        : 9_greaterNumber.c
 Author      : Hrishinandan N
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

//	Finding Greater Number
	int number1, number2;
	printf("Enter number 1: ");
	scanf("%d", &number1);
	printf("Enter number 2: ");
	scanf("%d", &number2);

	if(number1 > number2){
		printf("%d is greater.", number1);
	}else{
		printf("%d is greater.", number2);
	}

	return EXIT_SUCCESS;
}
