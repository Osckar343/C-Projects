#include <stdio.h>
#include <math.h>

/*  Objetivo: Calcular PI con base a una serie. 
    Autor: Óscar Méndez
    Fecha: 04/10/2023
*/
int main () {
    int contador, terminos;
    float acumPi = 0, pi;

    printf("Escribe la cantidad de terminos:");
    scanf("%d", &terminos);

    for(contador = 1; contador <= terminos; contador++)
        acumPi += 1 / pow(contador , 2);

    //Despeje de la fórmula (Sacando raiz)
    pi = sqrt(6 * acumPi);

    printf("PI = %-.6f", pi);
}