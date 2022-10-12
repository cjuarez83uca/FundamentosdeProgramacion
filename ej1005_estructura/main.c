#include <stdio.h>

int main(int argc, char argv[])
{
    // alumno:  almacenar nombre de persona, edad, asignatura y notas.
    struct dir
    {
        char nombre[20];
        int edad;
        char asignatura[30];
        float notas[4];
    } alumno;

    char Nombre[20] = "Carlos Anibal";

    alumno.notas[0] = 10;
    alumno.notas[1] = 9.5;
    alumno.notas[2] = 10;
    alumno.notas[3] = 5;

    // strcpy(alumno.nombre,"Carlos");
    
    printf("%s", Nombre);

    printf(" obtuvo nota de primer parcial: %5.2f", alumno.notas[0]);

    return 0;
}
