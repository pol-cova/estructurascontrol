#include <stdio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

/*
 * Created by Paul Contreras
 * Elabore un código que calcule la diagonal de un rectángulo.
 * Esto se puede con calcular con un simple teorema de Pitágoras.
 * Donde C^2 es la diagonal con respecto a A y B.
 */
int main() {

    setlocale(LC_CTYPE, "SPANISH");

    // Iniciamos declarando las variables que usaré, las cuales son la base y altura del rectángulo.
    float base, altura, diagonal, sumaCuadrados;

    // Imprimimos la información y solicitamos los datos.
    printf("Bienvenido a la calculadora de diagonales!\n");
    printf("Ingrese la base del rectángulo: ");
    scanf("%f", &base);
    printf("\n");
    printf("Ingrese la altura del rectángulo: ");
    scanf("%f", &altura);

    /*
     * Use fórmulas separadas para entender mejor el proceso, la variable suma del cuadrado, hace la suma
     * entre los cuadrados de la base y la altura, esto en función del teorema de Pitágoras, y la variable
     * diagonal adopta el valor de la raíz de la suma de los cuadrados.
     */
    sumaCuadrados = (base*base) + (altura*altura);
    diagonal = sqrtf(sumaCuadrados);

    // Imprimimos el valor de la diagonal.
    printf("La diagonal de tu rectángulo mide: %f \n", diagonal);

    system("pause");

    return 0;
}
