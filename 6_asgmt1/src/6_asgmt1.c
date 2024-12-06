/*
 ============================================================================
 Name        : 6_asgmt1.c
 Author      : Hrishinandan N
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

//		Accept a char input from use and display it on the console
	char input;
	printf("Enter a charachter: ");
	scanf("%c" ,&input);
	printf("Charachter is: %c", input);


//		Accept 2 input from user and output its sum
	int number1;
	float number2, sum;
	printf("Enter number1: ");
	scanf("%d", &number1);
	printf("Enter number2: ");
	scanf("%f", &number2);
	sum = number1 + number2;
	printf("Sum: %f", sum);

	return EXIT_SUCCESS;
}
