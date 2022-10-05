#include <stdio.h>
float maximo(float notas[], int n);
float minimo(float notas[], int n);

int main(int argc, char *argv[])
{
    int n;
    float nota_max;
    printf("cuantos notas seran: ");
    scanf("%d", &n);
    float notas[n];
    for (int i = 0; i < n; i++)
    {
        printf("Nota #%d: ", i + 1);
        scanf("%f", &notas[i]);
    }

    nota_max = maximo(notas, n);
    printf("La nota maxima es: %f", nota_max);
}

float maximo(float notas[], int n)
{
    float nota_max;
    nota_max = notas[0];
    for (int i = 1; i < n; i++)
    {
        if (nota_max < notas[i])
            nota_max = notas[i];
    }
    return (nota_max);
}

float minimo(float notas[], int n)
{
    float nota_min;
    nota_min = notas[0];
    for (int i = 1; i < n; i++)
    {
        if (nota_min > notas[i])
            nota_min = notas[i];
    }
    return (nota_min);
}

float media(float notas[], int n)
{
    float suma = 0;
    for (int i = 0; i < n; i++)
    {
        suma = suma + notas[i];
    }
    return (suma / n);
}

float varianza(float notas[], int n, float media)
{
    float temp;
    float suma = 0;
    for (int i = 0; i < n; i++)
    {
        temp = media - notas[i];
        temp = temp * temp;
        suma = suma + temp;
    }
    return(suma/n);
}