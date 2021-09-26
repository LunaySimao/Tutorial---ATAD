#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
#include "input.h"
#include "students.h"

int main() {

    Student student = {"1234", "Bruno Silva", 2};
    Student student1 = student;
    Student student2 = student;
    Student student3 = student;
    Student student4 = student;
    Student student5 = student;


    strcpy(student1.number, "190221005");
    strcpy(student1.name, "Lunay Simão");
    student1.enrollments = 3;

    strcpy(student2.name, "David Silva");
    strcpy(student2.number, "190320001");
    student2.enrollments = 4;

    strcpy(student3.name, "Ana Luísa");
    strcpy(student3.number, "123");
    student3.enrollments = 4;

    strcpy(student4.name, "Hélio Simão");
    strcpy(student4.number, "180320098");
    student4.enrollments = 3;

    strcpy(student5.name, "Arão Calombe");
    strcpy(student5.number, "12345");
    student5.enrollments = 5;
    

    studentPrint(student);
    studentPrint(student1);
    studentPrint(student2);
    studentPrint(student3);
    studentPrint(student4);
    studentPrint(student5);

    Student s1 = studentCreate("Swelly Simão", "12345678", 0);
    studentPrint(s1);

    return EXIT_SUCCESS;
}
