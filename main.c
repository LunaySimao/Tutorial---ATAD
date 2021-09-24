#include <stdio.h>
#include <stdlib.h>

int countEven(int arr[], int arrLength);

int sumArray(int arr[], int arrLength);
int main(){
    int values [] = {0, 1, 2, 7, 4, 6};

    int size = 6;
    int evens = countEven(values, size);

    int total = sumArray(values, size);
    return EXIT_SUCCESS;
}

int countEven(int arr[], int arrLength){
    int count = 0;
    for(int i = 0; i < arrLength; i++){
        if (arr[i] % 2 == 0)
        {
            count++;
        }
        
    }
    printf("There are %d even numbers in the array \n\n", count);
    return count;
}

int sumArray(int arr[], int arrLength){
    int sum = 0;

    for (int i = 0; i < arrLength; i++){
        sum += arr[i];
    }
    printf("The sum of array elements is equal to %d \n", sum);
    return sum;
}