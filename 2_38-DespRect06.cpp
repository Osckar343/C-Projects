/*  Objetivo: Generar una figura de números de 0's y 1's que formen un tríangulo rectángulo de 1's y el resto de 0's
    Autor: Óscar Méndez
    Fecha: 25/10/2023
*/

#include <stdio.h>

int main() {
    int cont1, cont2, n;
    
    printf("Ingresa el tama%co de la figura en renglones y columnas: ", 164);
    scanf("%d", &n);

    for (cont1 = 1; cont1 <= n; cont1++) {
        for(cont2 = 1; cont2 <= n; cont2++) {
            if(cont2 < n - cont1 + 2) 
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
    

