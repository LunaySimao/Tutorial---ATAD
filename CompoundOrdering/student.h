#pragma once

typedef struct student {
    char name[200];
    char number[12];
    int grade;
} Student;

typedef struct student* PtStudent;

//or
//typedef Student* PtStudent;

/**
 * @brief Creates and initializes a student
 * 
 * @param name [in] student name
 * @param number [in] student number
 * @param grade  [in] student grade
 * @return Student struct
 */
Student studentCreate(char *name, char *number, int grade);

/**
 * @brief Populates array with students.
 * 
 * The function returns how many students were actually populated.
 * This is important if 'howMany' is greater than available students.
 * 
 * Should use the return value to iterate the array afterwards.
 * 
 * @param arr [out] array of students to populate. Must have necessary space.
 * @param howMany [in] number of students to load
 * @return int actually number of populated students.
 */
int loadStudents(Student arr[], int howMany);

/****************************************************  Specification  *********************************************************/
/**
 * @brief 
 * 
 * @param arr 
 * @param arrSize 
 */
void bubbleSort(Student arr[], int arrSize);

/**
 * @brief 
 * 
 * @param arr 
 * @param arrSize 
 */
void selectionSort(Student arr[], int arrSize);

/**
 * @brief 
 * 
 * @param arr 
 * @param arrSize 
 */
void printArray(int arr[], int arrSize);

/**
 * @brief 
 * 
 * @param arr 
 * @param arrLength 
 */
void studentSortByGrade(Student arr[], int arrLength);