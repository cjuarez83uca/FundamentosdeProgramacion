#include <stdio.h>

int main(){
    int tam, contH = 0, contM = 0;

    printf("Ingrese tamanio del grupo: ");
    scanf("%d", &tam);

    char grupo[tam];

    for(int i = 0; i < tam; i++){
        printf("La persona que entro es: ");
        scanf(" %c", &grupo[i]);
    }

    for(int i = 0; i < tam; i++){
        if(grupo[i] == 'h'){
            contH++;
        }
        else{
            contM++;
        }
    }

    printf("Hombres: %d\nMujeres: %d", contH, contM);

    return 0;
}