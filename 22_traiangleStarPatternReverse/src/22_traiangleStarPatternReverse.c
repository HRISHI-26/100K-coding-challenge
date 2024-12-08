/*
 ============================================================================
 Name        : 22_traiangleStarPatternReverse.c
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
	printf("Enter number of lines: ");
	scanf("%d", &lines);

	for(i = lines; i > 0 ; i--){
		for(j = i; j > 0; j--){
			printf("* ");
		}
		printf("\n");
	}

	return EXIT_SUCCESS;
}
