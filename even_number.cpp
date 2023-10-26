#include <stdio.h>

/*  Objetivo: Ingresar número par... Sino, castigar al usuario. 
    Autor: Óscar Méndez
    Fecha: 16/10/2023
*/


int main() {
    int numero;

    do
    {
        printf("Ingresa un n%cmero par: ", 163);
        scanf("%d", &numero);
        if(numero%2 != 0) 
            printf("El n%cmero ingresado no es par... Vuelve a intentar\n", 163);
    } while (numero%2 != 0);

    printf("%cN%cmero par ingresado!", 173, 163);
}