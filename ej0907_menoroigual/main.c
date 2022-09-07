#include <stdio.h>
int main(int argc, char *varg[])
{
    // definiendo variables --> memoria
    int edad1, edad2, edad3;

    // Entradas
    printf("Edad del estudiante 1= ");  // Mensaje y no hay salto de línea.
    scanf("%d", &edad1);                //%d --> entero, &edad1 dirección de memoria de edad1
    printf("Edad del estudiante 2= ");  // Mensaje y no hay salto de línea.
    scanf("%d", &edad2);                //%d --> entero, &edad1 dirección de memoria de edad1
    printf("Edad del estudiante 3= ");  // Mensaje y no hay salto de línea.
    scanf("%d", &edad3);                //%d --> entero, &edad1 dirección de memoria de edad1
    if (edad1 < edad2 && edad1 < edad3) // condición para E1 menor
    {
        printf("Estudiante 1 es el menor de todos\n");// salto de línea\n 
    }
    else if (edad2 < edad1 && edad2 < edad3) // condición para E2 menor
    {
        printf("Estudiante 2 es el menor de todos\n");
    }
    else if (edad3 < edad1 && edad3 < edad2) // E3 menor
    {
        printf("Estudiante 3 es el menor de todos\n");
    }
    else if (edad1 == edad2 && edad1 < edad3)
    {
        printf("Estudiantes 1 y 2 misma edad y son los menores\n");
    }
    else if (edad1 == edad3 && edad1 < edad2)
    {
        printf("Estudiantes 1 y 3 misma edad y son los menores\n");
    }
    else if (edad2 == edad3 && edad2 < edad1)
    {
        printf("Estudiantes 2 y 3 misma edad y son los menores\n");
    }
    else
    {
        printf("Los tres estudiantes tienen la misma edad\n");
    }
    return 0;
}
