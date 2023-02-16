//
// Created by Paul Contreras on 16/02/23.
//
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
 * Created by Paul Contreras
 * Calcular el cuadrado de la suma de dos números o lo que es igual en matemáticas que decir
 * (a + b) ^ 2 = a^2 + 2ab + b^2
 */

int main()
{
    setlocale(LC_CTYPE, "SPANISH");

    // Definimos las variables en este caso, sumaCuadrados, num1, num2
    float num1,num2,sumaCuadrados;

    // Imprimimos la información y solicitamos los datos.
    printf("Bienvenido a la calculadora de suma de cuadrados!\n");
    printf("Ingrese el número 1: ");
    scanf("%f", &num1);
    printf("\n");
    printf("Ingrese el número 2: ");
    scanf("%f", &num2);

    // Este valor es equivalente a la sustitución en la fórmula general de las sumas de cuadrados
    sumaCuadrados = (num1 * num1) + 2*(num1 * num2) + (num2 * num2);

    // Imprimimos el valor de la suma.
    printf("La suma de los cuadrados de los números %.2f y %.2f es: %f \n", num1,num2, sumaCuadrados);

    system("pause");

    return 0;
}
