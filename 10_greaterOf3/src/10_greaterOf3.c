/*
 ============================================================================
 Name        : 10_greaterOf3.c
 Author      : Hrishinandan N
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

//	Finding greatest of 3 numbers
	int num1, num2, num3;
	printf("Enter number 1: ");
	scanf("%d", &num1);
	printf("Enter number 2: ");
	scanf("%d", &num2);
	printf("Enter number 3: ");
	scanf("%d", &num3);

	if(num1 > num2){
		if(num1 > num3){
			printf("%d is greater", num1);
		}else{
			printf("%d is greater", num3);
		}
	}else{
		if(num2 > num3){
			printf("%d is greater", num2);
		}else{
			printf("%d is greater", num3);
		}
	}

	return EXIT_SUCCESS;
}
