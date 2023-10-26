/*  Objetivo: Calcular cuántas horas desaparece la dosis inicial de Naproxeno del cuerpo
    Autor: Óscar Méndez
    Fecha: 12/10/2023
*/

#include <stdio.h>

#define RAZON 28.5 

int main() {

    float mgNaproxeno, desaparece;
    int horas;

    printf("Ingresa la cantidad de mg que se va a ingerir de Naproxeno S%cdico. (Evitar sobred%csis): ", 162, 162);
    scanf("%f", &mgNaproxeno);

    desaparece = mgNaproxeno - (mgNaproxeno * 90 / 100);
    
    while(mgNaproxeno >= desaparece) {
        horas++;
        mgNaproxeno -= mgNaproxeno * RAZON / 100;
        //printf("Hay %.2f mg en el cuerpo en la hora %d\n", mgNaproxeno, horas);
    }

    printf("Tom%c %d horas en que la dosis de Naproxeno desaparezca del cuerpo.", 162, horas);
}