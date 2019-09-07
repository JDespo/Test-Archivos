#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct{
    char nombre[20];
    char legajo[10];
    float  promedio;
}STR_ALUMNOS;

typedef struct funciones
{
    char nombre[20];
}STR_ARCHIVOS;

FILE* Open(const char* archivo, const char* modo);

STR_ALUMNOS parcear (char cad[50]);