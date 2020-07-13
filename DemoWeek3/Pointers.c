#include <stdio.h>
#include <stdlib.h>

#define VERSION_1
//#undef VERSION_1

int main(int argc, char * argv[]){
	setvbuff(stdout, NULL, _IONBF, 0);
	setvbuff(stderr, NULL, _IONBF, 0);

	printf("The number of command line arguments is: %d\n", argc);
	printf("arg[0] is the executable program: %d\n", argv[0] );
#ifdef VERSION_1
	printf("(version 1)\n");
	int i;
	for (i = 1; i < argc; i++){
		printf("%s%s", argv[i], (i < argc-1) ? " " : "");
	}
	printf("\n");
#else
	printf("(version 2)");
	while(--argc > 0)
		printf("%s%s", *++argv, (argc>1) ? " ":"");
		printf("\n");
#endif
	return EXIT_SUCCESS;
}
