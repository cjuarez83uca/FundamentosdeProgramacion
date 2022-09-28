#include <stdio.h>

// declarar las funciones a realizar
// especificar_tipo  nombre_funcion (lista de parámetros)
int cuad(int r);

int main(int argc, char *argv[])
{
    int x, y;
    x = 15;
    y = cuad(x); // llama a cuad para generar el cuadrado de x;
    // y=x*x; // hacer esto una función
    printf("El cuadrado de %d es: %d\n", x, y);
    printf("otra forma de hacerlo: %d\n", cuad(x));
}

// función que genera el cuadrado de un número entero.
int cuad(int r)
{
    int sal, x;
    x = 600; // solo existe aquí

    sal = r * r;
    return (sal); // retorna el valor de sal;
}