/*
 * PointerAndArray.c
 *
 *  Created on: Jun. 21, 2020
 *      Author: katie
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
	char *p = "Hello";
	char msg[] = "Goodbye!";

	printf("p[0] = '%c'\n", *p); 	/*print h*/
	printf("msg[0] = '%c'\n", *msg);	//print g

	p++;
	//msg++; 	//compiler err
	int numteam = 2;
	int numplayer = 4;
	short teamPlayerIds[numteam][numplayer];
	teamPlayerIds[0][2] = 8832;
	printf("%d\n", teamPlayerIds[0][2]);

	//using pointers
	short playerIds[numteam*numplayer];
	playerIds[0*4 + 2] = 22;
	printf("%d", playerIds[0*4 + 2]);

	//accessing the pointer


	return EXIT_SUCCESS;
}
