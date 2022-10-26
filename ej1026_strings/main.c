#include <stdio.h>
#include <string.h>

int main()
{
    char s1[12] = "Hola"; // crear s1 tipo char de 12 espacios de memoria y guadar en s1 la palabra Hola
    char s2[12] = "Mundo";
    char s3[12];
    char s4[12] = "mundo";
  
    int longitud, comp;

    // copy
    strcpy(s3, s1);
    printf(" funcionamiento de strcpy(s3,s1): %s\n", s3);

    // concatenar
    strcat(s1, " ");
    strcat(s1, s2);
    printf("funcionamiento de strcat(s1,s2): %s\n", s1);

    // longitud
    longitud = strlen(s1);

    printf("La longitud de s1 es: %d\n", longitud);

    // comparciones de strings
    comp = strcmp(s2, s4);
    printf("Funcionamiento strcmp(s2, s4): %d\n", comp);

    comp = strcmp(s4, s2);
    printf("Funcionamiento strcmp(s4, s2): %d\n", comp);

    printf("comparar(a,A): %d\n", strcmp("a", "A"));

    printf("strcmp(s1,s3): %d\n\n\n", strcmp(s1, s3));

    printf("strstr(s1,s3): %d\n", strstr(s1, s2));
    printf("%d\n",&s1[4]);

    printf("strstr(s1,s4): %d\n", strstr(s1, s4));

    for(int i=0;i<=longitud;i++){
        if (s1[i] == 'M'){
         int j=i;
         printf(" ocurre en la posicion: %d\n", j);
         break;
         }
    }
    

    return 0;
}