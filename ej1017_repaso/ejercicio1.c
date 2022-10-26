#include <stdio.h>
#include <math.h>

int main(){
    double a, b, c;
    double raiz1, raiz2;

    printf("Ingresa a ");
    scanf("%lf", &a);

    printf("Ingresa b ");
    scanf("%lf", &b);

    printf("Ingresa c ");
    scanf("%lf", &c);

    if((pow(b, 2) - 4*a*c) < 0){
        raiz1 = (-b)/(2*a);
        raiz2 = sqrt(4*a*c - (pow(b, 2)))/(2*a);

        printf("%lf + %lfi\n", raiz1, raiz2);
        printf("%lf - %lfi", raiz1, raiz2);
        //printf("%lfi", raiz2);
    }
    else{
        raiz1 = ((-b) + sqrt(pow(b, 2) - 4*a*c))/(2*a);
        raiz2 = ((-b) - sqrt(pow(b, 2) - 4*a*c))/(2*a);

        printf("La raiz 1 es: %lf\n", raiz1);
        printf("La raiz 2 es: %lf", raiz2);
    }

    return 0;
}