/*
 ============================================================================
 Name        : 35_2dArray.c
 Author      : Hrishinandan N
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int array[3][3], i, j;

	printf("Two Dimensional Array\n");
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			printf("Element[%d][%d]:",i,j);
			scanf("%d", &array[i][j]);
		}
	}

	printf("Array is:\n");
	for(i = 0; i < 3; i++){
		for(j = 0; j < 3; j++){
			printf("%d\t",array[i][j]);
		}
		printf("\n");
	}

	return EXIT_SUCCESS;
}
