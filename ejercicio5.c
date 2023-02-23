//
// Created by Paul Contreras on 16/02/23.
//

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/*
 * Created by Paul Contreras
 *  Escriba el programa en lenguaje C para calcular el volumen de una esfera.
 *  La fórmula general del volumen de una esfera es 4/3 Pi * r^3
 *  Para esta solución usaré la librería math.h para obtener el valor de pi, en math.h se llama M_PI
 */

int main()
{
    setlocale(LC_CTYPE, "SPANISH");

    // Definimos una constante que se llama factor de volumen la cual valdrá 4/3 la cual representa
    const float factorVolumen = 1.3333333333;
    // Las variables a usar solo son 2, el volumen, y el radio
    float volumen, radio;

    // Imprimimos la información y solicitamos los datos.
    printf("Bienvenido a la calculadora del volumen de una esfera!\n");
    printf("Ingrese el radio de la esfera: ");
    scanf("%f", &radio);

    // Se usa esta forma porque la es la formula general del volumen de una esfera.

    volumen = factorVolumen * M_PI * (radio * radio * radio);

    // Retornamos el valor del volumen
    printf("El volumen de la esfera de radio %.2f es: %f",radio, volumen);

    system("pause");
    
    return 0;

}
