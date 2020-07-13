#include<stdio.h>


/* creating a student structure */
struct student{
     int id;
     char fName[20];
     char lName[20];
     float marks;
};


struct student setStudent(void) {
    struct student stTemp;
    printf("Enter ID: ");
    scanf("%d", &stTemp.id);
    printf("Enter First Name: ");
    scanf("%s", stTemp.fName);
    printf("Enter Last Name: ");
    scanf("%s", stTemp.lName);
    printf("Enter Marks: ");
    scanf("%f", &stTemp.marks);
    return stTemp;
}

void getStudent(struct student stTemp) {
    printf("ID: %d\n", stTemp.id);
    printf("Last name: %s\n", stTemp.lName);
    printf("First name: %s\n", stTemp.fName);
    printf("Marks: %.2f\n", stTemp.marks);
}

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stdout, NULL, _IONBF, 0);
    /* array of struct student*/
     struct student stArray[2];
     int i;
     for (i=0;i<2;i++){
         printf("Enter information for student# %d\n", i+1);
         stArray[i] = setStudent();
     }
     for (i = 0; i < 2; i++) {
           printf("\nStudent #%d Detail:\n", (i+1));
           getStudent(stArray[i]);

     }

    return 0;
}
