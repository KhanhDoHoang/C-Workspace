/*
 ============================================================================
 Name        : MallocAndAlloc.c
 Author      : hoangdo
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	char *pMsg = "Hello!";
	pMsg = realloc(pMsg, 16);
	printf("%s", strcat(pMsg, "Bye"));


	return EXIT_SUCCESS;
}
