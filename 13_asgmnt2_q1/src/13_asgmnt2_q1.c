/*
 ============================================================================
 Name        : 13_asgmnt2_q1.c
 Author      : Hrishinandan N
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {


//	Check Pass or Fail
	int marks;
	printf("Enter your marks: ");
	scanf("%d", &marks);
	if(marks >= 50 && marks <= 100)
		printf("Passed");
	else if(marks < 50)
		printf("Failed");

	return EXIT_SUCCESS;
}
