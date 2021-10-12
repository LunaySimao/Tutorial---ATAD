#include <stdio.h> 
#include <stdlib.h>
#include "input.h"

//Pseudocodigo -> Linguagem C
//Protótipos


int main() {
    int v[] = {6, 5, 3, 1, 8, 7, 2, 4};
    int arrSize = 8;
    printArray(v, arrSize);

    printf("Quadratic Ordering Algorithms\n\n");
    //Bubble Sort - crescente

    //Selection Sort - decrescente

    printf("Bubble sort\n");
    bubbleSort(v, arrSize);
    printArray(v, arrSize);


    printf("Selection sort\n");
    selectionSort(v, arrSize);
    printArray(v, arrSize);

    return EXIT_SUCCESS;
}

/*
Bubble sort em pseudo-código:

Algorithm bubbleSort
input: arr - array of integers
arrSize - natural number
output: (arr is sorted increasingly)
BEGIN
FOR i <- 0 TO arrSize-1 DO
FOR j <- 0 TO arrSize-i-2 DO
IF arr[j] > arr[j+1] THEN
SWAP arr[j], arr[j+1] trocar valores 
END IF
END FOR
END FOR
END
*/

/*
Selection sort em pseudo-código
Algorithm bubbleSort
input: arr - array of integers
arrSize - natural number
output: (arr is sorted increasingly)
BEGIN
FOR i <- 0 TO arrSize-1 DO
FOR j <- 0 TO arrSize-i-2 DO
IF arr[j] > arr[j+1] THEN
SWAP arr[j], arr[j+1] trocar valores 
END IF
END FOR
END FOR
END
*/