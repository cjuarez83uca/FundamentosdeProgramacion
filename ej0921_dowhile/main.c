#include <stdio.h>
int main(int argc,char *varg[])
{
    int n;
    do {
        printf("Introduza un numero positivo: ");
        scanf("%d",&n);

    } while(n<0);
    printf("El número ingresado fue: %d",n);

}