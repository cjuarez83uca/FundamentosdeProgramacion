#include <stdio.h>
// declarando funciones
int factorial_re(int n);

int main(int argc, char *argv[])
{
    int num;
    printf("Programa para factorial recursivo\n");
    printf("Ingrese un numero entero: ");
    scanf("%d", &num);

    printf("El factorial de %d es %d", num, factorial_re(num));

    return 0;
}

int factorial_re(int n)
{
    int respuesta;
    if (n == 0)
        return (1);
    else
    {
        respuesta = n * factorial_re(n - 1);
        return (respuesta);
    }
}