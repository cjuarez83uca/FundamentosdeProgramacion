#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void)
{
    int var,var2,var3; //variable entera
    srand(time(NULL)); // semilla para generar número aleatorio
    var=rand()%3+1; // en genera numero aleatorios entre 1 y 3
    printf("%d\n",var); // imprime el número aleatorio
}