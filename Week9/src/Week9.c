//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//
//void printArgs(int, char *[]);
//void Avg(int count, char *num[]);
//void Sum(int count, char *num[]);
//
//int main( int argc, char *argv[] ) {
//	setvbuf(stdout, NULL, _IONBF, 0);
//    if (argc < 4){
//        printf("\nEnter at least 4 parameters\n");
//        exit(EXIT_FAILURE);
//        /*return 0;*/
//    }
//
//    printArgs(argc, argv);
//
//    if (strcmp(argv[1], "%") == 0)
//    {
//        printf("\nOption: %s --> Average Selected", argv[1]);
//        Avg(argc, argv);
//    }
//
//    else if (strcmp(argv[1], "+") == 0)
//    {
//        printf("\nOption: %s --> Sum Selected", argv[1]);
//        Sum(argc, argv);
//    }
//
//    return 0;
//}
//
///*This function prints the arguments by taking three arguments: (i)file pointer (ii) argc and (iii)*argv[] */
//void printArgs(int argc, char *argv[]){
//    int i;
//    printf ("Number of arguments = %d\r\n", argc);
//    for( i = 0; i < argc; i++ ) {
//        printf("Argv[%d] = %s\n", i, argv[i]);
//    }
//
//}
//
//void Avg(int count, char *num[]){
//    int i;
//    int sum = 0;
//    float avg;
//    for( i = 0; i < count; i++ ) {
//        sum += atof(num[i]);
//    }
//    avg = sum/(count-2);
//    printf("\n----------------\n");
//
//    printf("\nResult = %.1f\n", avg);
//
//
//}
//
//void Sum(int count, char *num[]){
//    int i;
//    int sum = 0;
//    for( i = 0; i < count; i++ ) {
//        sum += atof(num[i]);
//    }
//    printf("\n----------------\n");
//
//    printf("Result = %d\n", sum);
//
//}
