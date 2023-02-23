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
 * cos() estos operan en radianes.
 */

int main()
{
    setlocale(LC_CTYPE, "SPANISH");

    // Las variables a usar solo son 3, el ángulo, seno, y coseno
    double angulo, senAng, cosAng, radAng;

    // Imprimimos la información y solicitamos los datos.
    printf("Bienvenido a la calculadora trigonometrica!\n");
    printf("Ingrese la medida del ángulo en grados: ");
    scanf("%lf", &angulo);

    // Convertimos los grados a radianes
    radAng = angulo * M_PI / 180;

    // Usamos las funciones predefinidas para calcular los valores
    senAng = sin(radAng);
    cosAng = cos(radAng);

    // Retornamos el valor de los del seno y coseno respectivamente esto en radianes.
    printf("Medida en radianes \n");
    printf("El seno de %lfª es = %lf  \n",angulo, senAng);
    printf("El coseno de %lfº es = %lf  \n",angulo, cosAng);

    system("pause");

    return 0;
}

