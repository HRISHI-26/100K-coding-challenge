/*
 ============================================================================
 Name        : 23_asgmnt3_q1.c
 Author      : Hrishinandan N
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

//	Multiplication Table
	int multiplicant, i, product;
	printf("Enter Multiplicant: ");
	scanf("%d", &multiplicant);

	for(i = 1; i <= 10; i++){
		product = i * multiplicant;
		printf("%d * %d = %d\n", i, multiplicant, product);
	}

	return EXIT_SUCCESS;
}
