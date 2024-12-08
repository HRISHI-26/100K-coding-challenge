/*
 ============================================================================
 Name        : 30_arraySelectionSort.c
 Author      : Hrishinandan N
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int array[100], i, j, size, temp;
	printf("Enter size of array: ");
	scanf("%d", &size);

	printf("Enter elements into array:\n");
	for(i = 0; i < size; i++){
		scanf("%d", &array[i]);
	}

	printf("Entered array is: ");
	for(i = 0; i < size; i++){
		printf("%d ", array[i]);
	}

//		Selection sort
//	Hold and compare with others
	for(i = 0; i < size-1; i++){
		for(j = i+1; j < size; j++){
			if(array[j]<array[i]){
				temp = array[j];
				array[j] = array[i];
				array[i] = temp;
			}
		}
	}

	printf("\nSorted Array is: ");
	for(i = 0; i < size; i++){
		printf("%d ", array[i]);
	}

	return EXIT_SUCCESS;
}
