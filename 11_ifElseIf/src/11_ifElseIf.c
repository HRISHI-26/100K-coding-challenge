/*
 ============================================================================
 Name        : 11_ifElseIf.c
 Author      : Hrishinandan N
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int choice, num1, num2;
	printf("Basic Mathematical Operations\n");

	printf("1.Addition\n2.Subtraction\n"
			"3.Multiplication\n4.Division\n");

	printf("Enter number 1:");
	scanf("%d", &num1);
	printf("Enter number 2:");
	scanf("%d", &num2);

	printf("Enter your choice: ");
	scanf("%d", &choice);

	if (choice == 1) {
		printf("Result: %d", num1 + num2);
	} else if (choice == 2) {
		if (num1 >= num2)
			printf("Result: %d", num1 - num2);
		else
			printf("Result: %d", num2 - num1);
	} else if (choice == 3) {
		printf("Result: %d", num1 * num2);
	} else if (choice == 4) {
		if (num1 > num2)
			printf("Result: %d", num1 / num2);
		else
			printf("Result: %d", num2 / num1);
	}else{
		printf("Not a Choice");
	}
	return EXIT_SUCCESS;
}
