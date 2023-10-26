#include <stdio.h>

/*  Objetivo: Calcular descuentos de n articulos
    Autor: Óscar Méndez
    Fecha: 06/10/2023
*/

int main() {

    int cantidadArticulos, contador;
    float precioArticulo, totalPagar, descuento;
    
    printf("Ingreas el precio del articulo: ");
    scanf("%f", &precioArticulo);
    printf("Ingresa la cantidad de articulos: ");
    scanf("%d", &cantidadArticulos);

    for(contador = 1; contador <= cantidadArticulos; contador++) {
        printf("Ingresa descuento del articulo %d: ", contador);
        scanf("%f", &descuento);

        totalPagar += precioArticulo - descuento; 
    }

    printf("El total a pagar por %d articulos es: %.2f", cantidadArticulos, totalPagar);

    return 0;
}