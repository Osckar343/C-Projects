/*  Objetivo: Generar una figura de 0's y 1's donde el usuario ingrese un tamaño y la figura esté rodeada de 1's (el interior de 0's)
    Autor: Óscar Méndez
    Fecha: 25/10/2023
*/

#include <stdio.h>

int main () {
    int cont1, cont2, n;

    printf("Ingresa el tama%co renglones y columnas: ", 164);
    scanf("%d",&n); 

    for(cont1 = 1; cont1 <= n; cont1++) {
        for(cont2 = 1; cont2 <= n; cont2++) {
            if ( cont1 == 1 || cont2 == 1 || cont1 == n || cont2 == n )
                printf("1");
            else 
                printf ("0");
        }
        printf("\n");
    }
}