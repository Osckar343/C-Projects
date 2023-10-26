/* Objetivo: Calcular el tiempo en que se triplica la inversion con tasa anual del 11% 
    Autor: Óscar Méndez
    Fecha: 10/10/2023
*/

#include <stdio.h>

int main()
{
    float inversionInicial = 0, inversionFinal = 0, inversionObjetivo;
    int years = 0;

    printf("Ingresa tu inversion inicial: ");
    scanf("%f", &inversionInicial);

    inversionFinal = inversionInicial;
    inversionObjetivo = inversionInicial * 3;

    while(inversionFinal <= inversionObjetivo) {
        years++;
        inversionFinal += inversionFinal * 11 / 100;
        //printf("La inversion final en el anio %d es de: %f\n", years, inversionFinal);
    }

    printf("Tiempo en el que se triplica tu inversion: %d a%cos", years, 164);
}