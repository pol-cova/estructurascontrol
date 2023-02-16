//
// Created by Paul Contreras on 16/02/23.
//
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
 * Created by Paul Contreras
 * Escriba el programa en lenguaje C para realizar la conversión de pulgadas a centímetros.
 * Se sabe que el factor de conversión de pulgadas a centimetros es de 2.54.
 */

int main()
{
    setlocale(LC_CTYPE, "SPANISH");

    // Definimos una constante que se llama factor de conversion la cual representa que 2.54 cm equivalen a una pulgada
    const float factorConversion = 2.54;
    // Las variables a usar solo son 2, las pulgadas y los centimetros
    float pulgadas, centimetros;

    // Imprimimos la información y solicitamos los datos.
    printf("Bienvenido al convertidor de pulgadas a centimetros!\n");
    printf("Ingrese la cantidad de pulgadas: ");
    scanf("%f", &pulgadas);

    // Se usa esta forma porque la es la fórmula general conversion in * 2.54.

    centimetros = pulgadas * factorConversion;

    // Retornamos el valor de los centimetros.
    printf("%f pulgadas equivalen a %f centimetros",pulgadas, centimetros);

    system("pause");
}