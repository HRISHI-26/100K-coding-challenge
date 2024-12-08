/*
 ============================================================================
 Name        : 33_asgmnt4_q3.c
 Author      : Hrishinandan N
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

//	Sort an Array in Descending Order
	int array[100], size;
	int i, j, temp;

	printf("Enter size of Array: ");
	scanf("%d", &size);

	printf("Enter elements into array:\n");
	for(i = 0; i < size; i++){
		scanf("%d", &array[i]);
	}

	for(i = 0; i < size-1; i++){
		for(j = i+1; j < size; j++){
			if(array[i] < array[j]){
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}

	printf("Sorted Array; ");
	for(i = 0; i < size; i++){
		printf("%d ", array[i]);
	}
	return EXIT_SUCCESS;
}
