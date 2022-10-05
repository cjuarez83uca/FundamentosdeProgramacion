#include <stdio.h>
// declaramos las funciones del programa
int funcion(int vector[]);

int main(int argc, char argv[])
{
    int n = 20;
    int x[n]; // x es arreglo de enteros, y hay 10 espacios de memoria para x;
    int i;
    char a;
    float b;
    double c;
    char s[100];

    printf("el tamanio de una variable char es %d\n", sizeof(a));
    printf("el tamanio de una variable float es %d\n", sizeof(b));
    printf("el tamanio de una variable double es %d\n", sizeof(c));
    printf("el tamanio del numero entero es: %d\n", sizeof(i));
    printf("tamanio del arreglo de 10 enteros es: %d\n", sizeof(x));
    printf("tamanio del arreglo de 100 char es: %d\n", sizeof(s));

    int j = 0;
    for (i = 0; i < 2*n; i = i + 2)
    {
        x[j] = i;
        j = j + 1;
    }
    
    // funcion para imprimir los datos que están almacenados en x
    printf("Impresion de la funcion:\n ");
    printf("se imprimiran %d numeros\n", n);
    funcion(x);

    //
    printf("Impresion del main\n");
    printf("se imprimiran %d numeros\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", x[i]);
    }

    return 0;
}

int funcion(int vector[])
{
    int n=20;//pendiente de obtener longitud de vector.
    printf("%d\n",n);
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", vector[i]);
    }
    
}