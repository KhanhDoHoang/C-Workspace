/*
* Title: Lab 5: Reading FileIO
* Course: CST8234 -C Language
* Term:   Summer 2020
*
* 	Student #: <<< Hoang Do (do000075) >>>
*
*	Status:
*		Requirement #1:  {complete xor incomplete}
*		Requirement #2:  {complete xor incomplete}
*		Requirement #3:  {complete xor incomplete}
*		Requirement #4:  {complete xor incomplete}
*		Requirement #5:  {complete xor incomplete}
*		Requirement #6:  {complete xor incomplete}
*		Requirement #7:  {complete xor incomplete}
*		Requirement #8:  {complete xor incomplete}
*		Requirement #9:  {complete xor incomplete}
*		Requirement #10: {complete xor incomplete}
*		Requirement #11: {complete xor incomplete}
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//Total number of characters in file

#define OPTIONS1

int main(int argc, char *argv[])
{
    setvbuf(stdout, NULL, _IONBF, 0);
    setvbuf(stderr, NULL, _IONBF, 0);
    //int i;
    //Open FileRead for reading only
    FILE *inFile = fopen("FileRead.txt", "r");
    //Open a second file, called FileOut.txt for writing only
    //This only be created when program code is correct
    FILE *outFile = fopen("FileOut.txt", "w");

    if (inFile == NULL || outFile == NULL)
    {
        printf("Unable to open FileRead.txt\n");
        exit(EXIT_FAILURE);
    }
    else
    {
        //Check if the file open succeeded for both files
        //print err if cannot
        printf("Output file opened successfully!\n");
    }

    //if the file opened, read the content of fileread.txt
    //"The word I read from FileRead.txt ->"
    //char c;
    int count = 1;
    int charCount = 0;
    fprintf(outFile, "The word I read from FileRead.txt ->");
    printf("The word I read from FileRead.txt ->");
    int ch, word = 0;
    while ((ch = fgetc(inFile)) != EOF)
    {
        if (isspace(ch) || ispunct(ch))
        {
            if (word)
            {
                word = 0;
                putchar('\n');
                printf("The word I read from FileRead.txt ->");
                fprintf(outFile, "\n");
                fprintf(outFile, "The word I read from FileRead.txt ->");
                count++;
            }
        }
        else
        {
            word = 1;
            putchar(ch);
            fprintf(outFile, "%c", ch);
            charCount++;
        }
    }
    fclose(inFile);

    //Display the total number of words
    fprintf(outFile, "\nThis file has %d words in it.", count);
    printf("\nThis file has %d words in it.", count);
    fprintf(outFile, "\nThis file has %d characters in it.", charCount);
    printf("\nThis file has %d characters in it.", charCount);
    fclose(outFile);
    return EXIT_SUCCESS;
}
