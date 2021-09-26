#include <stdio.h>
#include <string.h>
#include "students.h"

void studentPrint(Student s){
    printf("%s | %s | %d \n", s.number, s.name, s.enrollments);
}

Student studentCreate(char *number, char *name, int enrollments){
    Student s;
    strcpy(s.number, number);
    strcpy(s.name, name);
    s.enrollments = enrollments;

    return s;
}