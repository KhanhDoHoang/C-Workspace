/*
 ============================================================================
 Name        : Demo-Week-1-Thurs.c
 Author      : Gerald.Hurdle@AlgonquinCollege.com
 Description : Demos in C, Ansi-style: Week 1 - Thursday
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	//TODO:  https://wiki.eclipse.org/CDT/User/FAQ#Eclipse_console_does_not_show_output_on_Windows
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	// strings in C are defined as an array of characters (char) that are null terminated.
	// That is, the end of the string is marked with the '\0' character.
	// For example, the C string "abc" appears in memory as:
	//   index: character
	//       0: 'a'
	//       1: 'b'
	//       2: 'c'
	//       3: '\0'
	//       4: UNDEFINED; if you access beyond the limits of the string, your program
	//          will most likely result in an unexpected run-time exception --- your
	//          program 'crashed'.
	char name[20];

	// declare three variables of type int
	// syntax is: <c-data-type> <userDefinedVariableName>
	int myInt;
	int yourInt;
	int rc;			// return code

	// call the printf() function to prompt the user for their name
	//TODO: man printf
	printf("Hello. What is your name? ");
	// call the scanf() function to get the name
	//TODO: man scanf
	rc = scanf( "%s", name );
	printf( "The return code set by scanf() is the number of items scanned.\n"
			"The return code is: %d\n", rc );

	printf( "\nWelcome %s to CST8234\n", name );

	do {
		printf( "Please enter an integer between 1 and 100 (inclusive): " );
		// & - address operator; pass the address of 'yourInt'
		scanf( "%d", &yourInt );
		if ( yourInt <= 0 ) {
			printf("Whoops... you entered an number less than 1. Try again...\n");
		}
		if ( yourInt > 100 ) {
			printf("Whoops... you entered a number greater than 100. Try again...\n");
		}
	} while ( (yourInt <= 0) || (yourInt > 100) );

	//TODO: rand() - returns a random number between 0 and RAND_MAX, which is a C macro.
	//TODO: rand()  % range + min
	//TODO: generate a number between 1 and 100
	myInt = rand() % 100 + 1;
	printf( "\nYour integer is: %d\tMy integer is: %d\n",
			yourInt, myInt);

	// == is the equal operator
	if ( yourInt == myInt ) {
		printf( "\tWe're equal.\n" );
	} else if ( yourInt < myInt ) {
		printf( "\tYour int is less than my int\n" );
	} else if ( yourInt > myInt ) {
		printf( "\tYour int is greater than my int\n" );
	}

	//TODO: EXIT_SUCCESS is an example of a C #define (hash-define)
	printf("\nWhen does your program quit? When the main() function returns or calls the exit() function.\n");
	printf("main() is returning: %d\n", EXIT_SUCCESS);
	return EXIT_SUCCESS;
}
