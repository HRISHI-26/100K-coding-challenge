/*
 ============================================================================
 Name        : 7_asgmnt1_SI.c
 Author      : Hrishinandan N
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

//	 	Simple Interest
	int principal;
	float interest, years, SI;
	printf("Enter principal amount: ");
	scanf("%d",&principal);
	printf("Enter interest: ");
	scanf("%f", &interest);
	printf("Enter number of years: ");
	scanf("%f", &years);

	SI = (principal*interest*years)/100;

	printf("Simple Interest: %f", SI);

	return EXIT_SUCCESS;
}
