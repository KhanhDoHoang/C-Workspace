#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void printArgs(int, char *[]);
void Avg(int count, char *num[]);
void Sum(int count, char *num[]);

int main(int argc, char *argv[])
{
    FILE *outFile;

    outFile = fopen("example.txt", "w+");

    if (outFile == NULL)
    {
        printf("Unable to open example.txt\n");
        exit(EXIT_FAILURE);
    }
    else
    {
        printf("Ouput file opened successfully");
    }

    if (argc < 4)
    {
        printf("\nEnter at least 4 parameters\n");
        exit(EXIT_FAILURE);
    }

    if (strcmp(argv[1], "%") == 0)
    {
        printf("\nOption: %s -->Average Selected", argv[1]);
        fprintf(outFile, "\nOption: %s --> Avg Selected", argv[1]);

        Avg(argc, argv);
    }
    else if (strcmp(argv[1], "+") == 0)
    {
        printf("\nOption: %s --> Sum Selected", argv[1]);
        fprintf(outFile, "\nOption: %s --> Sum Selected", argv[1]);
        Sum(argv, argv);
    }

    fclose(outFile);
    return 0;
}
