#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int countEven(int arr[], int arrLength);

int sumArray(int arr[], int arrLength);

int countOccurences(char *str, char c);
int main(){
    int values [] = {0, 1, 2, 7, 4, 6};

    int size = 6;
    int evens = countEven(values, size);

    int total = sumArray(values, size);

    char *str = "Algoritmos e Tipos Abstratos de Dados";
    char character = 'a';
    int occur = countOccurences(str, character);
    printf("The character %c appears %d times in the string \n", character, occur);
    return EXIT_SUCCESS;
}

//Devolve o total de números pares
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

// Devolve a soma de elementos do array
int sumArray(int arr[], int arrLength){
    int sum = 0;

    for (int i = 0; i < arrLength; i++){
        sum += arr[i];
    }
    printf("The sum of array elements is equal to %d \n", sum);
    return sum;
}

// Uma função que devolve quantas vezes ocorre c em str
int countOccurences(char *str, char c){
    int len = strlen(str);

    int count = 0;
    for (int i = 0; i < len; i++){
        if (str[i] == c){
            count++;
        }        
    }
    return count;
}