#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "student.h"
#include "input.h"

Student studentCreate(char *name, char *number, int grade) {
    Student student;

    strcpy(student.name, name);
    strcpy(student.number, number);
    student.grade = grade;

    return student;
}

int loadStudents(Student arr[], int howMany) {

    FILE* stream = fopen("students.csv", "r");

    int count = 0;
    char line[1024];
    while (fgets(line, 1024, stream))
    {
        if(count == howMany) break;

        char* tmp = strdup(line);
        
        char** tokens = splitString(tmp, 3, ";");
        
        int grade = atoi(tokens[2]);
        arr[count++] = studentCreate(tokens[0], tokens[1], grade);

	    free(tokens);
        free(tmp);
    }

    fclose(stream);

    return count;
}

/**************************************************  Implementation  ********************************************************/

// Order by number
void bubbleSort(Student arr[], int arrSize){
	for (int i = 0; i < arrSize; i++){
		//bool sorted = true; //Sweep Control Flag. Tells the function to stop sorting the array if it's already sorted        
		for (int j = 0; j < arrSize - i - 1; j++){
            //String Comparison
            if (strcmp(arr[j].number, arr[j+1].number) > 0){
                                //sorted = false;
                    Student aux = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = aux;
            }	
		}
		//if (sorted) break;				
	}
}

// Order by name
/*
void bubbleSort(Student arr[], int arrSize){
	for (int i = 0; i < arrSize; i++){
		//bool sorted = true; //Sweep Control Flag. Tells the function to stop sorting the array if it's already sorted        
		for (int j = 0; j < arrSize - i - 1; j++){
            //String Comparison
            if (strcmp(arr[j].name, arr[j+1].name) > 0){
                                //sorted = false;
                    Student aux = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = aux;
            }	
		}
		//if (sorted) break;				
	}
}
*/


// Ascending order
/*void studentSortByGrade(Student arr[], int arrLength){
    int min;
    for (int i = 0; i <= arrLength -1; i++){
        min = i;
        for (int j = i; j <= arrLength -1; j++){
            if (arr[j].grade == arr[min].grade){
                if (strcmp(arr[j].name, arr[min].name) < 0){
                    min = j;
                }     
            } else if (arr[j].grade > arr[min].grade){
                min = j;
            }       
        }
        Student aux = arr[i];
        arr[i] = arr[min];
        arr[min] = aux;
    }    
}*/

void selectionSort(Student arr[], int arrSize){
	for (int i = 0; i < arrSize; i++){
		int maxIndex = i;

		for (int j = i; j < arrSize; j++){
            if (strcmp(arr[j].name, arr[maxIndex].name) < 0){
                maxIndex = j;                
            }            
		}
        Student aux = arr[i];
		arr[i] = arr[maxIndex];
		arr[maxIndex] = aux;
	}
}

void printArray(int arr[], int arrSize){
	for (int i = 0; i < arrSize; i++){
		printf("%d ", arr[i]);
	}
	printf("\n");
}