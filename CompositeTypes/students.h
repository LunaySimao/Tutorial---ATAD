#pragma once

typedef struct student {
    char number[10];
    char name[256];
    int enrollments;
}Student;

/*Boa prática
Todas as funções que manipulam o tipo Student devem começar pela palavra Student
Na perspectiva de uniformizar/organizar o código
Deixando mais legível e fácil de entender
*/

/**
 * @brief 
 * 
 */
void studentPrint(Student);

/**
 * @brief Function to create students
 * Function to create and initialize the first variable of type student
 * 
 * @param number [in] Number
 * @param name [in] Name
 * @param enrollments [in] Number of enrollments
 * @return Student Returns the student instance by copy
 */
Student studentCreate(char *number, char *name, int enrollments);