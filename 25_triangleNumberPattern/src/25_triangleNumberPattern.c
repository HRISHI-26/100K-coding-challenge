/*
 ============================================================================
 Name        : 25_triangleNumberPattern.c
 Author      : Hrishinandan N
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

//	Number Pattern

	int lines, i, j;
	printf("Enter count: ");
	scanf("%d", &lines);

	for(i = 1; i <= lines; i++){
		for(j = 1; j <= i; j++){
			printf("%d ",j);
		}
		printf("\n");
	}

	return EXIT_SUCCESS;
}
