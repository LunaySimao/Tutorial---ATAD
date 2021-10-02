#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "pointer.h"

int main(void){
    
    Functionary fun1 = {"Ana Luísa", "25", {"Rua Óscar Monteiro Torres 19", "Lisboa", "2635-385"}, {"Facilities Officer", "FO"}};

    printf("My new employee is my love\n");
    functionaryPrint(fun1);

    //A pointer to modify the name specified in the structure
    /*Functionary *ptrFun1 = &fun1;

    (*ptrFun1).name = strcpy(ptrFun1->name,"Ana Luísa Eduardo");
    functionaryPrint(fun1);*/

    return EXIT_SUCCESS;
}