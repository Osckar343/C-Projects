/*  Objetivo: calcular después de cuántos años la cuenta de una persona A alcanzará a B
    Autor: Óscar Méndez
    Fecha: 10/10/2023
*/

#include <stdio.h>

#define TASARENDIMIENTO_A 8
#define TASARENDIMIENTO_B 5

int main() {

    float cantA, cantB;
    int anios;

    printf("Persona A, ingresa la cantidad que deseas invertir: ");
    scanf("%f", &cantA);
    
    printf("Persona B, ingresa la cantidad que deseas invertir: ");
    scanf("%f", &cantB);

    while(cantA < cantB) {
        anios++;
        cantA += cantA * TASARENDIMIENTO_A / 100;
        cantB += cantB * TASARENDIMIENTO_B / 100;
        //printf("Las cantidades en el a%co %d son de... A: %.2f -  B: %.f\n", 164, anios, cantA, cantB);
    }

    printf("La inversi%cn de la persona A le tom%c %d a%cos en alcanzar a la inversi%cn de la persona B", 162, 162, anios, 164, 162);
}