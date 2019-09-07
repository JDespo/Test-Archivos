#include "funciones.h"


FILE* Open(const char* archivo, const char* modo)
{

    FILE *pArchivo= NULL;
    if((pArchivo = fopen(archivo, modo))== NULL)
        {exit(EXIT_FAILURE);}
    return pArchivo;
}


STR_ALUMNOS parcear (char  cad[50]) //Jota,2151,7,8,9
{
    STR_ALUMNOS alumno;
    char *token = strtok(cad, ","); //Jota
    memset(alumno.nombre,'\0',20);
    strncpy(alumno.nombre, token,20);

    memset(alumno.legajo,'\0',10);
    
    strncpy(alumno.legajo,strtok(NULL, ","),10);//2151,7,8,9

    float nota1 = atof( strtok(NULL, ","));
    float nota2 = atof( strtok(NULL, ","));
    float nota3 = atof( strtok(NULL, ","));
    alumno.promedio = (nota1 + nota2 + nota3) / 3;
    
 return alumno;
}