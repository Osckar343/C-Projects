#include <stdio.h>


/*  Objetivo: calcular npsr
    Autor: Óscar Méndez
    Fecha: 04/10/2023
*/

int main(){
    
    float porcentajeAprobados, porcentajeReprobados;
    int contador, status, alumnos, aAprobados, aReprobados;
    
    printf("Ingresa la cantidad de alumnos del grupo: ");
    scanf("%d", &alumnos);
    
    for(contador = 1; contador <= alumnos; alumnos++) {
        printf("Alumno %d - Ingresa 1 si aprobo. Ingresa 0 si reprobo: ", contador);
        scanf("%d", &status);

        if(status == 1) 
            aAprobados++;
        else if(status == 0)
            aReprobados++;
    }

    porcentajeAprobados = (aAprobados * 100 ) / alumnos;



    printf("Cantidad de alumnos totales %d", alumnos);
    printf("Cantidad de Alumnos aprobados: %d", aAprobados);
    printf("Cantidad de Alumnos reprobados: %d", aReprobados);
    printf("Porcentaje de Alumnos Aprobados: %d", porcentajeAprobados);
    //printf("Porcentaje de Alumos reprobados: %d", porcentajeReprobados);

    

    return 0;
}