#include <stdio.h>
#include <stdlib.h>

void showAge();
int main(){
    printf("Hello world from WSL!! \n\n");

    
    
    showAge();
    return EXIT_SUCCESS;
}

void showAge(){
    int age = 0;

    printf("Please, introduce your age!! \n");
    scanf("%d", &age);

    printf("Você tem %d anos de idade\n", age);
    }