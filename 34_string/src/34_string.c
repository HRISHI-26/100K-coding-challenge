/*
 ============================================================================
 Name        : 34_string.c
 Author      : Hrishinandan N
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char name[13];
	printf("Enter a name of 12 letters: ");

//	Method 1
//	for(int i = 0; i < 12; i++){
//		scanf("%c", &name[i])
//	}

//	Method 2
	scanf("%s", name);

	printf("%s", name);

	return EXIT_SUCCESS;
}
