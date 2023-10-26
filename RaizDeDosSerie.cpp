#include <stdio.h>
#include <math.h>

/*  Objetivo: Calcular serie de raiz de 2 más su raiz...
    Autor: Óscar Méndez
    Fecha: 04/10/2023
*/

int main () {
    int contador, terminos;
    float serie  = 0;

    printf("Escribe la cantidad de terminos: ");
    scanf("%d", &terminos);

    for(contador = 1; contador <= terminos; contador++) 
        serie = sqrt(2 + serie);
    
    printf("Serie = %-.2f ", serie);
}
