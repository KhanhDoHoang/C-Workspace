/*

 ============================================================================
 Name        : Quiz3.c
 Author      : hoangdo
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int max(int int1, int int2);

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	char buffer[17] = "The length is 16";

	printf("sizeof( buffer ) is: %lu\n", sizeof(buffer));
	printf("sizeof( buffer ) is: %lu\n", strlen(buffer));

	printf("(*max)(49,50) is: %d\n", (*max)(49,50));

	int theMaxIs = (*max)(49,50);
	int *yPtr = &theMaxIs;
	int **y;

	y = &yPtr;

	printf("The max is: %d \n", **y);

	return EXIT_SUCCESS;
}

int max(int int1, int int2){
	if(int1 >= int2){
		return int1;
	}else{
		return int2;
	}
}

*/
