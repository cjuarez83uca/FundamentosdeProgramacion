#include <stdio.h>

int main(int argc, char *argv[])
{
    int a;

    printf("el valor de argc es: %d\n", argc);
    a = printf("hola mundo %s\n", argv[0]);
}