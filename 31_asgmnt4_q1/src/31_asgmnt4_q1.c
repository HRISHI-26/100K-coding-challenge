/*
 ============================================================================
 Name        : 31_asgmnt4_q1.c
 Author      : Hrishinandan N
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

//	Swap elements of 2 arrays
	int arrayOne[100], arrayTwo[100];
	int i, j, size, temp;

	printf("Enter size of array:");
	scanf("%d", &size);


//	Reading Elements
	printf("Enter elements of Array 1:\n");
	for(i = 0; i < size; i++){
		scanf("%d", &arrayOne[i]);
	}
	printf("Enter elements of Array 2:\n");
	for(i = 0; i < size; i++){
		scanf("%d", &arrayTwo[i]);
	}


//	Displaying Actual array
	printf("\nArray 1: ");
	for(i = 0; i < size; i++){
		printf("%d", arrayOne[i]);
	}
	printf("\nArray 2: ");
	for(i = 0; i < size; i++){
		printf("%d", arrayTwo[i]);
	}


//	Swapping Elements
	for(i = 0; i < size; i++){
		temp = arrayOne[i];
		arrayOne[i] = arrayTwo[i];
		arrayTwo[i] = temp;
	}


//	Displaying Swapped Array
	printf("\n\nArray 1: ");
	for(i = 0; i < size; i++){
		printf("%d", arrayOne[i]);
	}
	printf("\nArray 2: ");
	for(i = 0; i < size; i++){
		printf("%d", arrayTwo[i]);
	}
	return EXIT_SUCCESS;
}
