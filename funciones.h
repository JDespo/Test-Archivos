#ifndef FUNCIONES_H_INCLUDES
#define FUNCIONES_H_INCLUDES

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define l_name 20
#define l_legajo 9
#define l_linea 50
#define nota 6

typedef struct funciones
{
    char nombre[l_name +1];

}STR_ARCHIVOS;


typedef struct
{
    char nombre[l_name +1];
    char legajo[l_legajo +1];
    float  promedio;

}STR_ALUMNOS;

FILE* Open(const char* archivo, const char* modo);

STR_ALUMNOS parcear (char linea[]);

#endif 
