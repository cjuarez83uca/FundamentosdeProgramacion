#include <stdio.h>
// llamada por valor 
// declarar las funciones a realizar
// especificar_tipo  nombre_funcion (lista de parámetros)
int cuad(int r);

int main(int argc, char *argv[])
{
    int i;
    for(i=1;i<=10;++i){
        printf("El cuadrado de %d es %d\n",i, cuad(i));

    }
    printf("El último valor de i fue: %d",i);
    
    // y=x*x; // hacer esto una función
   // printf("El ultimo valor de i es =", i);
    
}

// función que genera el cuadrado de un número entero.
int cuad(int r)
{
    int sal;
    sal = r * r;
    return (sal); // retorna el valor de sal;
}