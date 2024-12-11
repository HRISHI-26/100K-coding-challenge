/*
 ============================================================================
 Name        : 40_asgmnt5_q1.c
 Author      : Hrishinandan N
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

//	Checking Palindrome string

	int size;
	printf("Enter size of String: ");
	scanf("%d", &size);

	char word[size + 1], i;
	printf("Enter String: ");
	scanf("%s", word);

	for (i = 0; i < size / 2; i++) {
		if (word[i] == word[size - i - 1])
			continue;
		else {
			printf("String is not palindrome");
			exit(EXIT_SUCCESS);
		}
	}
	printf("String is palindrome");

	return EXIT_SUCCESS;
}
