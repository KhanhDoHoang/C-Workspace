/*
 ============================================================================
 Name        : Demo-Week-5-Monday-malloc.c
 Author      : Gerald.Hurdle@AlgonquinCollege.com
 Description : Demo malloc(), memset(), calloc() and free() in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// format: CCCNNNN
#define MAX_COURSE_NAME (7 + 1)
#define MAX_COURSES 3

int main(void) {
	// Declare variables (but do not initialize)
	char **arrayOfCourses;
	char *courseName;
	int index;

	//TODO:  https://wiki.eclipse.org/CDT/User/FAQ#Eclipse_console_does_not_show_output_on_Windows
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	printf( "sizeof(char) is: %ld\n", sizeof(char) );
	printf( "sizeof(char *) is: %ld\n", sizeof(char *) );
	printf( "sizeof(long int) is: %ld\n\n", sizeof(long int) );

	// Dynamically allocate enough memory at run-time to store
	// 1 courseName, formatted to AC
	courseName = (char *) malloc( sizeof(char)*MAX_COURSE_NAME );
	if ( NULL == courseName ) {
		fprintf( stderr, "Error - could not allocate memory for CourseName" );
		return EXIT_FAILURE;
	}

	// Initialize memory to null character
	memset( courseName, '\0', sizeof(char)*MAX_COURSE_NAME );
	printf( "The address of courseName is: %p\n", courseName );

	// Reduce the previous 2 function calls to one:
	//courseName = (char *) calloc( MAX_COURSE_NAME, sizeof(char) );

	// Copy literal string to courseName buffer and display
	strcpy( courseName, "MAD9132" );
	printf("The courseName is: %s\n", courseName );
	// put the empty string to stdout; notice: \n
	puts( "" );

	// Dynamically allocate an array of pointers to chars (i.e. C strings) and initialize
	arrayOfCourses = malloc( MAX_COURSES * sizeof(char *) );
	if ( NULL == arrayOfCourses ) {
		fprintf( stderr, "Error - could not allocate memory for courses" );
		return EXIT_FAILURE;
	}
	memset( arrayOfCourses, '\0', MAX_COURSES * sizeof(char *) );
	printf( "The address of arrayOfCourses is: %p\n", arrayOfCourses );

	for( index = 0; index < MAX_COURSES; index++ ) {
		// Dynamically allocate enough memory for 1 course name and initialize
		arrayOfCourses[index] = (char *) malloc( sizeof(char)*MAX_COURSE_NAME );
		if ( NULL == arrayOfCourses[index] ) {
			fprintf( stderr, "Error - could not allocate memory for course name" );
			return EXIT_FAILURE;
		}
		memset( arrayOfCourses[index], '\0', sizeof(char)*MAX_COURSE_NAME );

		switch ( index ) {
			case 0:
				strcpy( arrayOfCourses[index], "CST8234" );
				break;

			case 1:
				strcpy( arrayOfCourses[index], "CST8227" );
				break;

			case 2:
				strcpy( arrayOfCourses[index], "CST8244" );
				break;

			default:
				fprintf( stderr, "Error - array-out-of-bounds %d\n", index );
		}
	} // end of for-loop

	//display the array (i.e. list) of course names, which is an array of chars, null-terminated
	puts( "List of courses:" );
	for( index = 0; index < MAX_COURSES; index++ ) {
		printf( "\t[%d] %s\n", index, arrayOfCourses[index] );
	}

	//TODO: remember to free your memory when done; no System.gc()
	free( courseName );
	// free() each course name
	for( index = 0; index < MAX_COURSES; index++ ) {
		free( arrayOfCourses[index] );
	}
	free( arrayOfCourses ); // free the array

	return EXIT_SUCCESS;
}
