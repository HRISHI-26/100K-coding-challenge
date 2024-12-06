/*
 ============================================================================
 Name        : 2_scanf.c
 Author      : Hrishinandan N
 Version     :
 Copyright   : Your copyright notice
 Description : Reading and printing
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int num;
	printf("Enter a number");
	scanf("%d",&num);
	printf("You have entered %d",num);

	return EXIT_SUCCESS;
}
