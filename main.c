// Online C compiler to run C program online

// Incluir la biblioteca para entrada/salida
#include <stdio.h>

// Programa principal
int main(int argc, char *argv)
{

    // Declaración de variables
    int vida_util;
    int anio, i;
    double costo, val_rescate, depreciacion, dep_acum, val_ac;

    // Introducir datos
    printf("Introduzca el valor de compra del auto: ");
    scanf("%lf", &costo);

    printf("Vida util: ");
    scanf("%d", &vida_util);

    printf("Valor final de rescate: ");
    scanf("%lf", &val_rescate);

    // Establecer año
    anio = 2023;
    i = 1;
    depreciacion = (costo - val_rescate) / vida_util;
    // impresión de cabeceras
    printf("Año     Depreciacion        Depreciacion acumulada       Valor Actual\n");

    while (i <= vida_util)
    {
        dep_acum = dep_acum + depreciacion;
        val_ac = costo - dep_acum;
        printf("%d        %7.2lf                  %8.2lf                   %8.2lf\n", i, depreciacion, dep_acum, val_ac);
        i = i + 1;
    }

    return 0;
}