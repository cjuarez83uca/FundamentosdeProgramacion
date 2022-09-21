#include <stdio.h>
int main(int argc, char *varg[])
{
    int n;
    printf("ingrese un numero positivo: ");
    scanf("%d", &n);
    while (n < 0)
    {
        printf("ingrese un numero positivo: ");
        scanf("%d", &n);
    }
    printf("El número ingresado fue: %d",n);
return 0;
}
