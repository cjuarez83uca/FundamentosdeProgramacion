#include <stdio.h>
// llamada por referencia
/* hacer un programa que guarde dos números enteros en dos variables distintas
y hacer una función intercambie los valores entre las variables;
es decir: x=10 y z=5 --> swap(x,z), el resultado es z=10 y x =5; */
int swap(int *x, int *y);
// cuando hago *x, me devuelve el valor en la dirección de memoria (PC)
int main(int argc, char *argv[])
{
    int x, y;
    printf("Ingrese un numero entero: ");
    scanf("%d", &x);
    printf("Ingrese otro numero entero: ");
    scanf("%d", &y);
    printf("\nEl valor de x es: %d y el valor de y es: %d\n", x, y);
    swap(&x, &y); // función swap &x, devuelve la dirección de memoria
    printf("\nEl valor de x es: %d y el valor de y es: %d\n", x, y);
    return 0;
}

int swap(int *x, int *y)
{
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}