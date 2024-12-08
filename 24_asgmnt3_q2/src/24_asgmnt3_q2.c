/*
 ============================================================================
 Name        : 24_asgmnt3_q2.c
 Author      : Hrishinandan N
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

//	Sum of odd numbers

	int limit, i, sum = 0;
	printf("Enter a number: ");
	scanf("%d", &limit);

	for(i = 1; i <= limit; i+=2){
		sum += i;
	}
	printf("Sum: %d", sum);

	return EXIT_SUCCESS;
}
