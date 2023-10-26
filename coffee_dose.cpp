/*  Objetivo: Calcular cuántas horas desaparece la dosis inicial de café del cuerpo
    Autor: Óscar Méndez
    Fecha: 12/10/2023
*/

#include <stdio.h>

#define RAZON 16 

int main() {

    float mgCafe, desaparece;
    int horas;

    printf("Ingresa la cantidad de mg que se va a tomar de caf%c. (Evitar sobred%csis): ", 130, 162);
    scanf("%f", &mgCafe);

    desaparece = mgCafe - (mgCafe * 75 / 100);
    
    while(mgCafe >= desaparece) {
        horas++;
        mgCafe -= mgCafe * RAZON / 100;
        //printf("Hay %.2f mg en el cuerpo en la hora %d\n", mgCafe, horas);
    }

    printf("Tom%c %d horas en que la dosis de caf%c desaparezca del cuerpo.", 162, horas, 130);
}