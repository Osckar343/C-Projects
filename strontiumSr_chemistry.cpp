#include<stdio.h>

/* Objetivo: Calcular tiempo en años cuando el estroncio se desintegra al 5%
    Nombre: Oscar Andrés
    Fecha: 10/10/2023
*/

int main(){
    int anios;
    float masaInicial, masaFinal, masaObjetivo;

    printf("Ingresa la masa del estroncio: ");
    scanf("%f", &masaInicial);

    masaFinal = masaInicial;
    masaObjetivo = masaInicial * 5 / 100;

    while (masaFinal >= masaObjetivo) {
        anios++;
        masaFinal -= masaFinal * 2.4 / 100 ;
        //printf("Masa final en el anio %d es de: %f\n", anios, masaFinal);
    }

    printf("Le toma al estroncio %d anios desintegrarse", anios);
}