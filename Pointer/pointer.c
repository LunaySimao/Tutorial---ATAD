#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pointer.h"

/*
Functionary functionaryCreate(char *name, char *number, Locality l, Position p){
    Functionary f;

    strcpy(f.name, name); //Name
    strcpy(f.number, number); // Number
    strcpy(l.adress, f.locality.adress); //Adress
    strcpy();

    return f;
}
*/

Functionary functionaryCreate(Functionary f){
    Functionary f1;

    strcpy(f1.name, f.name);
    strcpy(f1.number, f.number);
    
    strcpy(f1.locality.adress, f.locality.adress);
    strcpy(f1.locality.City, f.locality.City);
    strcpy(f1.locality.CP, f.locality.CP);

    strcpy(f1.position.acronym, f.position.acronym);
    strcpy(f1.position.designation, f.position.designation);

    return f1;
}

void functionaryPrint(Functionary f){

    printf("Welcome to our external collaborator, called:\n\n");

    printf("Name: %s \t\t", f.name);
    printf("Number: %s \t\n", f.number);
    
    printf("With the address: \t");
    printf("%s \t", f.locality.adress);
    printf("%s \t", f.locality.City);
    printf("%s \n", f.locality.CP);

    printf("And he holds the position of: \t");
    printf("%s ", f.position.designation);
    printf("(%s) \n", f.position.acronym);    
}