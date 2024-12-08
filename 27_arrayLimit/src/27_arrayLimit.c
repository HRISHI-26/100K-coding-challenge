/*
 ============================================================================
 Name        : 27_arrayLimit.c
 Author      : Hrishinandan N
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

//	User defined size of array

	int array[100],i,limit;
	printf("Enter array size: ");
	scanf("%d", &limit);

	printf("Enter elements to array:\n");
	for(i = 0; i < limit; i++){
		scanf("%d",&array[i]);
	}

	printf("Array is:");
	for(i = 0; i < limit; i++){
		printf(" %d",array[i]);
	}

	return EXIT_SUCCESS;
}
