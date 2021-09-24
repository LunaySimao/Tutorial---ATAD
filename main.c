#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int countEven(int arr[], int arrLength);

int sumArray(int arr[], int arrLength);

int countOccurences(char *str, char c);

bool equal(char *s1, char *s2);
int main(){
    int values [] = {0, 1, 2, 7, 4, 6};

    int size = 6;
    int evens = countEven(values, size);

    int total = sumArray(values, size);

    char *str = "Algoritmos e Tipos Abstratos de Dados";
    char character = 'a';
    int occur = countOccurences(str, character);
    printf("The character %c appears %d times in the string \n", character, occur);
    

    char *str1 = "Hello";
    char *str2 = "Hello";
    bool eq = equal(str1, str2);

    printf("%d \n", eq);
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

//Function that checks if two strings are equal
bool equal(char *s1, char *s2){
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    if (len1 != len2){
        return false;
    }
    
    for (int i = 0; i < len1; i++)
        if (s1[i] != s2[i]){
            return false;
        }

    return true;    
}