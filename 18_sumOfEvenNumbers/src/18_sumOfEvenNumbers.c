/*
 ============================================================================
 Name        : 18_sumOfEvenNumbers.c
 Author      : Hrishinandan N
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int number, i,  sum = 0;
	printf("Enter a number: ");
	scanf("%d", &number);

	for(i = 2; i <= number; i += 2){
		sum += i;
	}
	printf("Sum of Even numbers: %d", sum);


	return EXIT_SUCCESS;
}
