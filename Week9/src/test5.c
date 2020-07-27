/*
 * test5.c
 *
 *  Created on: Jul. 23, 2020
 *      Author: katie
 */


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int notmain(void)
{
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	char c1 = 'a', c2 = 'A';
	int i = c2 - c1;
	printf("%d", i);
	return EXIT_SUCCESS;
}
