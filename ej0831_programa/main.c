#include <stdio.h> // compilador --> MinGW

int main(int argc, char *argv)
{ // instrucción de inicio
    // Definiendo memoria a utilizar en el programa
    int Edad1; // guarando memoria de la PC de 16 bits
    int Edad2, Edad3;
    int E1menor, E2menor, E3menor;
    // Lectura de datos --> necesito una libreria para leer el teclado --> declara al inicio
    printf("Escriba el anio de nacimiento del estudiante 1: "); // escritura en pantalla
    scanf("%d", &Edad1);                                        // lectura de teclado, %d tipo de dato, & operador puntero, devuelve dirección de memoria

    Edad1 = 2022 - Edad1; // actualización de memoria
    printf("La edad del estudiante 1 es %d\n", Edad1);

    printf("Escriba el anio de nacimiento del estudiante 2: "); // escritura en pantalla
    scanf("%d", &Edad2);                                        // lectura de teclado, %d tipo de dato, & operador puntero, devuelve dirección de memoria
    Edad2 = 2022 - Edad2;                                       // actualización de memoria
    printf("La edad del estudiante 2 es %d\n", Edad2);

    printf("Escriba el anio de nacimiento del estudiante 3: "); // escritura en pantalla
    scanf("%d", &Edad3);                                        // lectura de teclado, %d tipo de dato, & operador puntero, devuelve dirección de memoria
    Edad3 = 2022 - Edad3;                                       // actualización de memoria
    printf("La edad del estudiante 3 es %d\n", Edad3);

    // vericando que el estudiante 1 sea el menor

    E1menor = Edad1 < Edad2 && Edad1 < Edad3;
    if (E1menor)
    {
        printf("El estudiante 1 es el menor de todos\n");
    }

    if (Edad2 < Edad3 && Edad2 < Edad1)
    {
        printf("El estudiante 2 es el menor de todos\n");
    }

   if(Edad3 < Edad2 && Edad3 < Edad1){
    printf("El estudiante 3 es el menor de todos\n");
   }

   return 0;

} // instrucción de fin