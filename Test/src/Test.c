/*
 ============================================================================
 Name        : Test.c
 Author      : hoangdo
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int x = 5;
	int *xp = x;
	printf("%p - %p",&x,&xp);

	char arr[6];
	printf("Enter");
	scanf("&s", &arr);

	int arr[] = {2,3,4,1,6};
	printf("%u, %u, %u\n", arr, &arr[0], &arr);

}

