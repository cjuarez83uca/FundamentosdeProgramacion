#include <stdio.h>

int main(){
    int dui[9], sum, rem, veredicto;

    printf("Ingrese su dui digito por digito\n");
    for (int i = 0; i < 9; i++)
    {
        printf("Ingrese un digito ");
        scanf("%d", &dui[i]);
    }

    sum = sumatoria(dui);
    rem = sum%10;

    if(rem == 0){
        printf("El Dui es real");
    }
    else
    {
        veredicto = 10 - rem;
        if(veredicto == dui[8]){
            printf("El Dui es real");
        }
        else{
            printf("El Dui es falso");
        }
    }
    

    return 0;
}


int sumatoria(int arr[]){
    int suma = 0;
    for(int i = 0; i < 8; i++){
        suma += arr[i]*(9-i);
    }
    return suma;
}