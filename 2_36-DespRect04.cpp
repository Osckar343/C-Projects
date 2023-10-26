/*  Objetivo: Generar una figura de 0's y 1's donde la primera mitad en vertical sea de 1's y la segunda mitad de 0's
    Autor: Óscar Méndez
    Fecha: 25/10/2023
*/

#include <stdio.h>

int main() {
    int cont1, cont2, n;
    
    printf("Ingresa el tama%co en renglones y columnas: ", 164);
    scanf("%d", &n);

    for(cont1 = 1; cont1 <= n; cont1++) {
        for(cont2 = 1; cont2 <= n; cont2++) 
            if(cont2 <= n/2)
                printf("1");
            else 
                printf("0");

        printf("\n");
    }
}