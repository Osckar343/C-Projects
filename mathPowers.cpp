/*  Objetivo: Calcular potencias de 2
    Autor: Óscar Méndez
    Fecha: 10/10/2023
*/

#include <stdio.h>
#include <math.h>

int main() {

    int terminos, potencias, resultado = 1;

    printf("Ingresa la cantidad de terminos. ");
    scanf("%d", &terminos);

    do {
        resultado = pow(2, potencias);
        printf("2^%d = %d\n", potencias, resultado);
        potencias++;

    }while(potencias <= terminos);

}