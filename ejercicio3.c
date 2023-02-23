//
// Created by Paul Contreras on 16/02/23.
//
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
 * Created by Paul Contreras
 *  Convertir de temperatura en grados centígrados a grados Fahrenheit.
 *  Según los factores de conversión la fórmula general es: F = 1.8C + 32
 */

int main()
{
    setlocale(LC_CTYPE, "SPANISH");

    // Definimos una constante llamada factor de conversion, ya que esta no cambia sino que vale 1.8 siempre
    const float factorConversion = 1.8;
    // Definimos dos variables más llamadas gradF, para los grados fahrenheit y gradosC para referirnos a los celsius
    float gradF, gradC;

    // Imprimimos la información y solicitamos los datos.
    printf("Bienvenido al conversor de temperatura, C -> F!\n");
    printf("Ingrese el valor de los grados Celsius: ");
    scanf("%f", &gradC);
    printf("\n");

    // Usamos la fórmula general y sustituimos con los valores del usuario y la constante definida.
    gradF = (factorConversion * gradC) + 32;
    // Imprimimos el valor de los grados fahrenheit.
    printf("%.2f grados Celsius equivalen a %.3f grados Fahrenheit", gradC, gradF);
    system("pause");
    
    return 0;
}
