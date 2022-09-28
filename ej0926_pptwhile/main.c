#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *varg[])
{
    int user_data, pc_data,flag;
    int gane = 0, pierde = 0, empate = 0;

   // for (;;)
   while (1)
    {

        // menu se repite si el usuario ingresa un dato erróneo

        do
        {
            printf("Elija una de las siguientes opciones:\n");
            printf("\t1. Piedra\n");
            printf("\t2. Papel\n");
            printf("\t3. Tijera\n");
            printf("Su opción es: ");
            scanf("%d", &user_data);
        } while (user_data != 1 && user_data != 2 && user_data != 3);

        // Generar número aleatorio
        // dar una semilla
        srand(time(NULL));
        pc_data = rand() % 3 + 1;
        printf("El dato de la usuario es: %d\n", user_data);
        printf("El dato de la pc es: %d\n", pc_data);

        // Evaluación de los casos
        switch (user_data)
        {
        case 1:               // piedra
            if (pc_data == 1) // piedra
            {
                empate++;
                printf("empate");

            }
            else if (pc_data == 2) // papel
            {
                pierde++;
                printf("pierde");
            }
            else // tijera
            {
                gane++;
                printf("gane");
            }
            break;            // termina la estructura switch
        case 2:               // papel
            if (pc_data == 1) // piedra
            {
                gane++;
                printf("gane");
            }
            else if (pc_data == 2) // papel
            {
                empate++;
                printf("empate");
            }
            else // tijera
            {
                pierde++;
                printf("pierde");
            }
            break;            // finaliza la estructura switch
        case 3:               // tijera
            if (pc_data == 1) // piedra
            {
                pierde++;
                printf("pierde");
            }
            else if (pc_data == 2) // papel
            {
                gane++;
                printf("gane");
            }
            else // tijera
            {
                empate++;
                printf("empate");
            }
            break;
        }
    printf("desea continuar:\n\t0 continua\n\t1 para");
    scanf("%d",&flag);
    if (flag){
        break;
    }
    }
    printf("ustede gano %d\n",gane);
    printf("ustede empato %d\n",empate);
    printf("ustede perdio %d\n",pierde);
    return 0;
}