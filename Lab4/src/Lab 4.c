#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/*Course structure*/
typedef struct {
	char courseCode[8];
	char courseName[25];
} Course;

/*Student structure*/
typedef struct Student{
	int id;
	char firstname[19];
	char lastname[19];
	Course *course;

} Student;

/*Set student information*/

struct Student setStudent(void) {
	Student student;

	do{
		printf("Enter ID: ");
		scanf("%d", &student.id);
		if (student.id < 10000 || student.id > 99999) {
			printf("Invalid student id. Please enter a 5 digit integer\n");
		}
	} while(student.id < 10000 || student.id > 99999);

	printf("Enter first name: ");
	scanf("%s", student.firstname);
	printf("Enter last name: ");
	scanf("%s", student.lastname);
	//----------------------------


	return student;
}

/* *
 * This is getStudent to print out when filling is done
 */

void getStudent(Student student){
	printf("ID: %d\n", student.id);
	printf("Student name: %s %s\n", student.firstname, student.lastname);
	//printf("Last name: %s\n", );
}

/* *
 * This is main method for general input
 */

int main(void){
	setvbuf(stdout, NULL, _IONBF, 0);
	//setvbuf(stderr, NULL, _IONBF, 0);

	printf("How many students would you like to register: ");
	int numberOfStudents;
	scanf("%d", &numberOfStudents);
	Student studArr[numberOfStudents];
	Course courses[numberOfStudents];

	for(int i = 0; i < numberOfStudents; i++){
		printf("Enter information for %d student:\n", (i+1));
		studArr[i] = setStudent();
		studArr[i].course = &courses[i];
		printf("Enter course code: ");
		scanf("%s", studArr[i].course->courseCode);
		printf("Enter course name: ");
		scanf("%s", studArr[i].course->courseName);

		//----------------------------------------------------------------------------------
	}
	for (int i = 0; i < numberOfStudents; i++) {
		printf("\nStudent #%d Detail:\n", (i+1));
		getStudent(studArr[i]);
		printf("Course code: %s\n", courses[i].courseCode);
		printf("Course name: %s\n", courses[i].courseName);
	}

	return 0;
}

