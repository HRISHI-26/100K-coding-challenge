/*
 ============================================================================
 Name        : 21_triangleStarPattern.c
 Author      : Hrishinandan N
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int lines, i, j;
	printf("Enter number of Lines: ");
	scanf("%d", &lines);

		//		i == linecount  =row
		//		j == starcount  =column
	for(i = 1; i <= lines; i++){
		for(j = 1; j <= i; j++){
			printf("* ");
		}
		printf("\n");
	}

	return EXIT_SUCCESS;
}
