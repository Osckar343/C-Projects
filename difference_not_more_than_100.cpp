#include <stdio.h>

/*  Objetivo: Usuario ingrese dos cantidades y que su diferencia sea menor a 100... Sino, castigar al usuario. 
    Autor: Óscar Méndez
    Fecha: 16/10/2023
*/

int main() {
    int cantidad1, cantidad2, diferencia;

    printf("Diferencia = cantidad 1 - cantidad 2\n\n");

    do
    {
        printf("Ingresa cantidad 1: ");
        scanf("%d", &cantidad1);
        printf("Ingresa cantidad 2: ");
        scanf("%d", &cantidad2);
        
        diferencia = cantidad1 - cantidad2;

        if(diferencia > 100) 
            printf("La diferencia es mayor a 100... Vuelve a intentar (Diferencia: %d)\n\n", diferencia);

    } while (diferencia > 100);

    printf("%cLo lograste! La diferencia fue menor a 100. (Diferencia: %d)", 173, diferencia);
}
