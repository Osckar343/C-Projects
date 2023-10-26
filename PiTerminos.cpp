#include <stdio.h>

/*  Objetivo: calcular valores de PI terminos
    Autor: Óscar Méndez
    Fecha: 04/10/2023
*/

int main () {
    int contador, terminos, par, impar;

    printf("Escribe la cantidad de terminos: ");
    scanf("%d", &terminos);

    printf("PI = ");
    for(contador = 1; contador <= terminos; contador++) {

        if (contador == 1)
            printf("4 "); //Primer término
        else
            printf("* (%d/%d)\t", 2 * contador-  2, 2 * contador-1); //par - impar

    }
}