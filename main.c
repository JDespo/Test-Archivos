#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"


int main()
{
    
    STR_ARCHIVOS materias[3];
    strcpy(materias[0].nombre, "Prog00.txt");  
    strcpy(materias[1].nombre, "Prog01.txt");
    strcpy(materias[2].nombre, "Prog02.txt");
    
    FILE *pArchivoN = Open ("NotasFinales.txt","a+");
    char linea[50];
    
     for(int i=0; i<3 ; i++)
     {
         STR_ALUMNOS alumno;
        //FILE *pArchivo = Open (materias[i].nombre,"a+");  //Segmentation fault (`core' generado)
        FILE *pArchivo = Open ("Prog01.txt","a+"); // SI funciona

        printf("\n \t\t Nombre Materia: %s \t\n",materias[i].nombre);
        fprintf(pArchivoN," \t\t Nombre Materia: %s \t\n",materias[i].nombre);

        fgets(linea,50,pArchivo);
        while(!feof(pArchivo))
        {
            alumno = parcear (linea);

            printf("Nombre: %s\n", alumno.nombre);
            printf("Legajo: %s\n", alumno.legajo);
            printf("Promedio: %.2f\n\n", alumno.promedio);
            if (alumno.promedio > 5)
            {
                fprintf(pArchivoN," Nombre: %s \tLegajo: %s \tNota: %0.2f\n",alumno.nombre,alumno.legajo,alumno.promedio);
            }
            
            fgets(linea,50,pArchivo);
            
        }
        fclose(pArchivo);
     }
    fclose(pArchivoN);
  
}

