#include <stdio.h>

int main(int argc, char *argv[])
{
    // declarando variables
    int n;
    int producto;
    int respuesta;
    printf("Ingresar un numero entero: ");
    scanf("%d", &n);
    if (n == 0)
    {
        producto = 1;
    }
    else
    {
        producto = 1;

        for (int i = n; i >= 1; i = i - 1)
        {
            printf("i = %d", i);
            producto = producto * i;
        }
    }

    respuesta = producto;
    printf("El factorial de %d es %d\n", n, respuesta);
}