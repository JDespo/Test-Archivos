#include "funciones.h"


FILE* Open(const char* archivo, const char* modo)
{
    FILE *pArchivo = NULL;
    if((pArchivo = fopen(archivo, modo)) == NULL)
    {
        exit(EXIT_FAILURE);
    }
    
    return pArchivo;
}


STR_ALUMNOS parcear (char  linea[])
{
    STR_ALUMNOS alumno;
    char *token = strtok(linea, ";");
    memset(alumno.nombre, '\0', l_name );
    strncpy(alumno.nombre, token, l_name);

    memset(alumno.legajo, '\0',10);
    strncpy(alumno.legajo, strtok(NULL, ";"), l_legajo);

    float nota1 = atof( strtok(NULL, ";"));
    float nota2 = atof( strtok(NULL, ";"));
    float nota3 = atof( strtok(NULL, ";"));
    alumno.promedio = (nota1 + nota2 + nota3) / 3;
    
    return alumno;
}
