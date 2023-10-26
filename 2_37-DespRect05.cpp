/*  Objetivo: Generar una figura de números que crecen en forma ascendente (1,2,3...) en forma de tríangulo hacia abajo y llenar el resto de 0's
    Autor: Óscar Méndez
    Fecha: 25/10/2023
*/

#include <stdio.h>

int main() {
    int cont1, cont2, n, contadorSuma = 0;
    
    printf("Ingresa el tama%co en renglones y columnas de la figura: ", 164);
    scanf("%d", &n);
    
    for(cont1 = 1; cont1 <= n; cont1++) {
        for(cont2 = 1; cont2 <= n; cont2++) {
        
            if(cont2 <= cont1) {
                contadorSuma++;
                printf("%d\t", contadorSuma);
            } else 
                printf("0\t");
        }
            
        printf("\n");
    }      
}