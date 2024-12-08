/*
 ============================================================================
 Name        : 29_arraySearch.c
 Author      : Hrishinandan N
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int array[100], i, size, key;
	printf("Enter size of array: ");
	scanf("%d", &size);

	printf("Enter elements into array:\n");
	for(i = 0; i < size; i++){
		scanf("%d", &array[i]);
	}

	printf("Enter key to search: ");
	scanf("%d", &key);

	for(i = 0; i < size; i++){
		if(key == array[i]){
			printf("Element is at: %d", i+1);
			break;
		}else{

			printf("Element not found");
		}
	}

	return EXIT_SUCCESS;
}
