/*
 ============================================================================
 Name        : 14_asgmnt2_q2.c
 Author      : Hrishinandan N
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

//	Assigning Grades based on marks

	int marks;
	printf("Enter your marks: ");
	scanf("%d", &marks);

	if(marks >= 90)
		printf("Grade: A");
	else if(marks >= 80 && marks < 90)
		printf("Grade: B");
	else if(marks >= 70 && marks < 80)
		printf("Grade: C");
	else if(marks >= 60 && marks < 70)
		printf("Grade: D");
	else if(marks >= 50 && marks < 60)
		printf("Grade: E");
	else if(marks < 50)
			printf("Failed");


	return EXIT_SUCCESS;
}
