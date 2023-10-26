#include <stdio.h>

/*  Objetivo: calcular npsr
    Autor: Óscar Méndez
    Fecha: 04/10/2023
*/


int main() {
    
    int n, r, nFactorial = 1, rFactorial = 1, contador;
    float npsr;

    printf("Ingresa la cantidad n datos: ");
    scanf("%d", &n);

    printf("Ingresa el grupo de r elementos: ");
    scanf("%d", &r);

    for (contador = n; contador > 1; contador--)
        nFactorial = nFactorial * contador;

    for (contador = r; contador > 1; contador--)
        rFactorial = rFactorial * contador;

    npsr = nFactorial / rFactorial;

    printf("n Factorial: %d\n", nFactorial);
    printf("r Factorial: %d\n", rFactorial);
    printf("El numero de permutaciones sin repeticion es: %f", npsr);
    
    return 0;
}