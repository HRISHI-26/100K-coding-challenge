/*
 ============================================================================
 Name        : 8_checkNumber.c
 Author      : Hrishinandan N
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

//	Checking a number is positive or negative
	int number;
	printf("Enter a number: ");
	scanf("%d", &number);

	if(number > 0){
		printf("Number is Positive");
	}
	else{
		printf("Number is Negative");
	}

	return EXIT_SUCCESS;
}
