/*
 ============================================================================
 Name        : 41_asgmnt5_q2.c
 Author      : Hrishinandan N
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int size;
	printf("Enter size of array:");
	scanf("%d", &size);

	int array1[size][size], array2[size][size], i, j;
	int sum[size][size];

	printf("Enter elements into Array1: \n");
	for(i = 0; i < size; i++){
		for(j = 0; j < size; j++){
			scanf("%d", &array1[i][j]);
		}
	}

	printf("Enter elements into Array2: \n");
	for(i = 0; i < size; i++){
		for(j = 0; j < size; j++){
			scanf("%d", &array2[i][j]);
		}
	}

	printf("Array1: \n");
	for(i = 0; i < size; i++){
		for(j = 0; j < size; j++){
			printf("%d\t",array1[i][j]);
		}
		printf("\n");
	}
	printf("Array2: \n");
	for(i = 0; i < size; i++){
		for(j = 0; j < size; j++){
			printf("%d\t",array2[i][j]);
		}
		printf("\n");
	}

	printf("Sum of Arrays:\n");
	for(i = 0; i < size; i++){
		for(j = 0; j < size; j++){
			sum[i][j] = array1[i][j] + array2[i][j];
			printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}


	return EXIT_SUCCESS;
}
