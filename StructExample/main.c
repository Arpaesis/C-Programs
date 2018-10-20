#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char firstName[20];
    char lastName[20];
    int id;
    int grade;
    char classes[7][20];
} student;

int main()
{
    //Instance of the student structure.
    student newStudent;

    //Initialize structure elements.
    strcpy(newStudent.firstName, "Jon");
    strcpy(newStudent.lastName, "Doe");
    newStudent.id = 20;
    newStudent.grade = 12;
    strcpy(newStudent.classes[0], "Tech Support");
    strcpy(newStudent.classes[1], "Calculus");
    strcpy(newStudent.classes[2], "Literature");
    strcpy(newStudent.classes[3], "Government");
    strcpy(newStudent.classes[4], "Debate");
    strcpy(newStudent.classes[5], "Drawing");
    strcpy(newStudent.classes[6], "Physics");

    //Print out details of the student.
    printf("Student's first name is: %s\n", newStudent.firstName);
    printf("Student's last name is: %s\n", newStudent.lastName);
    printf("Student's id is: %d\n", newStudent.id);
    printf("Student's grade is: %d\n", newStudent.grade);

    //A loop to get all the classes of the student.
    for(int i = 1; i < 8; i++) {
        printf("Student's period %d is: %s\n", i, newStudent.classes[i-1]);
    }

    return 0;
}
