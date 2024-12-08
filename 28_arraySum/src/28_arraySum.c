/*
 ============================================================================
 Name        : 28_arraySum.c
 Author      : Hrishinandan N
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

//	Finding Sum of Array elements

	int size, i, array[100], sum = 0;
	printf("Enter size of array: ");
	scanf("%d", &size);

	printf("Enter elements into array:\n");
	for(i = 0; i < size; i++){
		scanf("%d", &array[i]);
		sum += array[i];
	}

	printf("Sum is: %d", sum);

	return EXIT_SUCCESS;
}
