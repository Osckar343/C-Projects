#include <stdio.h>

/*  Objetivo: Ingresar número múltiplo de 13... Sino, castigar al usuario. 
    Autor: Óscar Méndez
    Fecha: 16/10/2023
*/


int main() {
    int numero;

    do
    {
        printf("Ingresa un n%cmero que sea m%cltiplo de 13: ", 129, 129);
        scanf("%d", &numero);
        if(numero%13 != 0) 
            printf("El n%cmero ingresado no es m%cltiplo de 13... Vuelve a intentar\n", 129, 129);
    } while (numero%13 != 0);

    printf("%cM%cltiplo de 13 ingresado!", 173, 129);
}