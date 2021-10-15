#include <stdio.h> 
#include <stdlib.h>
#include "student.h"
#include "input.h"

int main() {
   
    Student students[200];

    int n = loadStudents(students, 60);

    
    //bubbleSort(students, n);
    //studentSortByGrade(students, n);
    selectionSort(students, n);

    for(int i=0; i < n; i++) {
        printf("Student[%2d]: %s | %s | %d \n", (i + 1), students[i].name, students[i].number, students[i].grade);
    }

    return EXIT_SUCCESS;
}
