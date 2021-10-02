#pragma once

#include <stdio.h>

typedef struct locality{
    char adress[255];
    char City[55];
    char CP[8];
}Locality;

typedef struct position{
    char designation[55];
    char acronym[7];
}Position;

typedef struct functionary{
    char name[255];
    char number[255];
    Locality locality;
    Position position;
}Functionary;

/*
Functionary functionaryCreate(char *name, char *number, Locality l, Position p);
*/

Functionary functionaryCreate(Functionary f);

void functionaryPrint(Functionary f);