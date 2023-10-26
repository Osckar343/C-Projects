/*  Objetivo: Generar una figura de 0's y 1's donde se generen los 1's en diagonal en ambos lados
    Autor: Óscar Méndez
    Fecha: 25/10/2023
*/

#include <stdio.h>

int main() {
    int cont1, cont2, n;
    
    printf("Ingrese el tama%co de la figura (renglones y columnas): ", 164);
    scanf("%d", &n);
    
    for(cont1 = 1 ; cont1 <= n ; cont1++) {
        for (cont2 = 1; cont2 <= n; cont2++)
        {
            if( cont1 == cont2 || cont1 + cont2 == n + 1 ) 
                printf("1");
            else 
                printf("0");
        }
        printf("\n");
    }
}

// (0,1) (0,2) (0,3)
// (1,1) (1,2) (1,3)
// (2,1) (2,2) (2,3)