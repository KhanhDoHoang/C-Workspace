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
	Course course;

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

	//student.course->courseCode = courseToAdd;
	//free(courseToAdd);

	printf("Enter course code: ");
	scanf("%8s", student.course.courseCode);

	printf("Enter course name: ");
	scanf("%25s", student.course.courseName);

	//free(courseNameToAdd);

	return student;
}

/* *
 * This is getStudent to print out when filling is done
 */

void getStudent(Student student){
	printf("ID: %d\n", student.id);
	printf("First name: %s\n", student.firstname);
	printf("Last name: %s\n", student.lastname);
	printf("Course code: %s\n", student.course.courseCode);
	printf("Course name: %s\n", student.course.courseName);
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

	for(int i = 0; i < numberOfStudents; i++){
		printf("Enter information for %d student:\n", (i+1));
		studArr[i] = setStudent();

		//----------------------------------------------------------------------------------
	}
	for (int i = 0; i < numberOfStudents; i++) {
		printf("\nStudent #%d Detail:\n", (i+1));
		getStudent(studArr[i]);

	}

	return 0;
}

