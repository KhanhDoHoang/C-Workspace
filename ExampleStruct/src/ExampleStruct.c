/*
 ============================================================================
 Name        : ExampleStruct.c
 Author      : hoangdo
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include<stdio.h>

struct Book {
    char* author;
    int ISBN;
};

void printBookInfo () {
    struct Book myBook;
    myBook.author = "The Gratest author";
    myBook.ISBN = 12353;
    printf("Name: %s\n", myBook.author);
    printf("ISBN: %d\n", myBook.ISBN);
}

struct Movie {
    char* name;
    int year;
    int rating;
} myMovie;

void printMovieInfo() {
    myMovie.name = "Matix";
    printf("Movie name: %s\n", myMovie.name);
}

typedef struct{
    char *Fname;
    char *Lname;
    int studentID;
} Student;

typedef struct{
    char *courseName;
    Student *students;
}Course;

int main(){
    printBookInfo();
    printMovieInfo();

    Student student1;
    student1.Fname = "John";
    student1.Lname = "Doe";
    student1.studentID = 12345;

    printf("name: %s %s, student ID: %d\n", student1.Fname, student1.Lname, student1.studentID);

    Course course;
    course.courseName = "CST8234";
    course.students = &student1;

    printf("course name: %s, registered student: %s\n", course.courseName, course.students->Fname);

    return 0;
}
