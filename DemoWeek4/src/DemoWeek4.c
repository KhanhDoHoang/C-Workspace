/*
 ============================================================================
 Name        : Demo-Week-4-Thursday.c
 Author      : Gerald.Hurdle@AlgonquinCollege.com
 Slide (PPT) : 3a - Stack vs Heap
 Description : Stack - Empherality in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DEBUG

//TODO: declaration (i.e. prototype) AND definition... together
char* getName() {
	//created on the stack
	char name[32];
#ifdef DEBUG
	//string copy the literal C string ("CST8234") to name
	strcpy( name, "CST8234" );
#else
	scanf( "%s", name );
#endif

	//rewinds the SP, so that now ‘name’ is below the SP
	return name;
}

int main(void) {
	//TODO:  https://wiki.eclipse.org/CDT/User/FAQ#Eclipse_console_does_not_show_output_on_Windows
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	//prompt user for name
	printf( "Please enter your name: " );

	//points to vulnerable place on stack
	char *myName = getName();

	//overwrites stack, clobbering 'name'
	printf( "%s\n", myName );

	return EXIT_SUCCESS;
}
