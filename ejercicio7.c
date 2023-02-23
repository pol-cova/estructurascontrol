//
// Created by Paul Contreras on 16/02/23.
//
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/*
 * Created by Paul Contreras
 * Elabore un código que calcule el seno y el coseno de un ángulo.
 * Para esto usaremos las funciones predefinidas dentro de la librería math.h, las cuales son sin() y
 * cos() esto nos da los valores en radianes.
 */

int main()
{
    setlocale(LC_CTYPE, "SPANISH");

    // Las variables a usar solo son 3, el ángulo, seno, y coseno
    double angulo, senAng, cosAng;

    // Imprimimos la información y solicitamos los datos.
    printf("Bienvenido a la calculadora trigonometrica!\n");
    printf("Ingrese la medida del ángulo: ");
    scanf("%lf", &angulo);

    // Usamos las funciones predefinidas para calcular los valores
    senAng = sin(angulo);
    cosAng = cos(angulo);

    // Retornamos el valor de los del seno y coseno respectivamente esto en radianes.
    printf("Medida en radianes \n");
    printf("El seno de %lfº es = %lf radianes \n",angulo, senAng);
    printf("El coseno de %lfº es = %lf radianes \n",angulo, cosAng);

    system("pause");
    
    return 0;
}

