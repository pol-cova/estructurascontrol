//
// Created by Paul Contreras on 16/02/23.
//

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
 * Created by Paul Contreras
 * Calcular el número de segundos en un minuto, una hora, un día y una semana.
 * Se sabe que hay 60 segundos en 1 minuto con esto en mente podemos operar.
 */

int main()
{
    setlocale(LC_CTYPE, "SPANISH");

    // Definimos el factor conversion como constante, ya que siempre habrá 60 segundos en un minuto.
    const int factorConversionTiempo = 60;
    // Definimos las variables las cuales serán minuto, hora, día, y semana
    int minuto, hora, dia, semana;

    // Esto considerado los factores de conversion y las relaciones del tiempo.
    minuto = factorConversionTiempo;
    hora = factorConversionTiempo * minuto;
    dia = 24 * hora;
    semana = 7 * dia;

    // Imprimimos la información y los valores de las fórmulas.
    printf("Bienvenido a la tabla de conversion de tiempo!\n");
    printf("___________________________________________\n");
    printf("En un minuto hay: %d segundos \n", minuto);
    printf("En una hora hay: %d segundos \n", hora);
    printf("En un dia hay: %d segundos \n", dia);
    printf("En una semana hay: %d segundos \n", semana);

    system("pause");
}
