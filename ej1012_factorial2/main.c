#include <stdio.h>

// declarar las funciones
int factorial_no(int n);

int main(int argc,int *argv[])
{
    int num;
    printf("Ingrese un numero entero: ");
    scanf("%d",&num);

    printf("El factorial de %d es %d",num,factorial_no(num));

    return 0;

}

int factorial_no(int n)
{
    if (n==0) return(1);
    else
    {
        int producto=1;
        for (int i=n;i>=1;i=i-1)
        {
            producto=producto*i;
        }
        return(producto);

    }
}
