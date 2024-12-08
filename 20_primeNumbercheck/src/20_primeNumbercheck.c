/*
 ============================================================================
 Name        : 20_primeNumbercheck.c
 Author      : Hrishinandan N
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int number, i, flag = 0;
	printf("Enter a number: ");
	scanf("%d", &number);

	for(i = 2; i < number/2; i++){
		if(number % i == 0){
			flag = 1;
			break;
		}
	}

	if(flag == 0)
		printf("Prime Number");
	else
		printf("Not Prime");


	return EXIT_SUCCESS;
}
