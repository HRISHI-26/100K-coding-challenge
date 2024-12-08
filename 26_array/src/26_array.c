/*
 ============================================================================
 Name        : 26_array.c
 Author      : Hrishinandan N
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int array[10], i;
	printf("Enter elements into array: ");
	for(i = 0; i < 5; i++){
		scanf("%d", &array[i]);
	}

	printf("Array is: ");
	for(i = 0; i < 5; i++){
		printf("%d ", array[i]);
	}

	return EXIT_SUCCESS;
}
