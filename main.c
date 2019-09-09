#include "funciones.h"


int main()
{
    
    STR_ARCHIVOS materias[3];
    strcpy(materias[0].nombre, "Prog00.txt");  
    strcpy(materias[1].nombre, "Prog01.txt");
    strcpy(materias[2].nombre, "Prog02.txt");
    
    FILE *pArchivoN = Open("NotasFinales.txt","w");
    char linea[l_linea];
    
     for(int i = 0; i < 3 ; i++)
     {
         STR_ALUMNOS alumno;
        FILE *pArchivo = Open(materias[i].nombre,"r");  
        
        char *materia = strtok(materias[i].nombre, ".");
        printf("\n \t\t Nombre Materia: %s \t\n\n", materia);
        fprintf(pArchivoN,"\n \t\t Nombre Materia: %s \t\n\n", materia);

        fgets(linea, l_linea, pArchivo);
        while(!feof(pArchivo))
        {
            alumno = parcear(linea);
            printf("Nombre: %s\t\tLegajo: %s\t\tPromedio: %.2f\n\n", alumno.nombre, alumno.legajo, alumno.promedio);// imprime todos los alumnos por pantalla

            if (alumno.promedio >= nota)
            {
                fprintf(pArchivoN, "Nombre: %s\t\tLegajo: %s\t\tPromedio: %.2f\n\n", alumno.nombre, alumno.legajo, alumno.promedio); // solo guarda aproados
            }
            fgets(linea, l_linea, pArchivo);
        }
        fclose(pArchivo);
        printf("Cierra archivo: \"%s\"\n\n", materia);
     }
    fclose(pArchivoN);
    printf("\n\tCierra archivo escritura con Notas Aprobados\n\n");
}
