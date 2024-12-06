/*
 ============================================================================
 Name        : 12_switch.c
 Author      : Hrishinandan N
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int choice;
	printf("1.C programming\n2.Java\n3.Html\n4.Css\n");

	printf("Enter a choice: ");
	scanf("%d", &choice);

	switch(choice){
	case 1:
		printf("You selected C programming");
		break;
	case 2:
		printf("You selected Java");
		break;
	case 3:
		printf("You selected Html");
		break;
	case 4:
		printf("You selected Css");
		break;
	default:
		printf("Not a choice");
		break;
	}

	return EXIT_SUCCESS;
}
