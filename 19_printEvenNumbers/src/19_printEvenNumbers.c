/*
 ============================================================================
 Name        : 19_printEvenNumbers.c
 Author      : Hrishinandan N
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int number, i;
	printf("Enter a number: ");
	scanf("%d", &number);

	for(i = 1; i <= number; i++){
		if(i % 2 == 0){
			printf("%d\n", i);
		}
	}

	return EXIT_SUCCESS;
}
