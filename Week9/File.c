 #include <stdio.h>
 #include <string.h>
 #include <stdlib.h>

 int main()
 {
     FILE *inFile;

     inFile = fopen("example2.txt", "r");

     if (inFile == NULL)
     {
         printf("\nUnable to open example2\n");
         exit(EXIT_FAILURE);
     }
     else
     {
         printf("\nOpen successful\n");
     }
     int quantity;
     char product[20];
     int line = 1;
     while (1)
     {
         int rc = fscanf(inFile, "%d %s", &quantity, product);
         if (rc == 2)
         {
             printf("Product %s, Quantiy %d\n", product, quantity);
         }
         else if (rc != EOF)
         {
             fprintf(stderr, 'Invalid input on Line %d of example2.txt\n', line);
         }
         else
         {
             break;
         }
         line++;
     }
     fclose(inFile);
     return 0;
 }
