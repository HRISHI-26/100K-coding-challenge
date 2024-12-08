/*
 ============================================================================
 Name        : 32_asgmnt4_q2.c
 Author      : Hrishinandan N
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

//	Finding number of Even numbers in an Array
	int array[100], size;
	int i, count = 0;

	printf("Enter size of array: ");
	scanf("%d", &size);

	printf("Enter elements into array:\n");
	for(i = 0; i < size; i++){
		scanf("%d", &array[i]);

		if(array[i]%2 == 0)
			count++;
	}

	printf("Number of Even Elements: %d", count);

	return EXIT_SUCCESS;
}
