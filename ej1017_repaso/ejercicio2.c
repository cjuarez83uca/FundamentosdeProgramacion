#include <stdio.h>

int main(){
    double salario, resultado, renta;

    printf("Ingrese su salario: ");
    scanf("%lf", &salario);

    resultado = salario - (salario*0.0725) - (salario*0.03);

    if(resultado >= 0.01 && resultado <= 472.00){
        renta = 0.00;
    }
    else if(resultado >= 472.01 && resultado <= 895.24){
        renta = (salario - 472.00)*0.1 + 17.67;
    }
    else if(resultado >= 895.25 && resultado <= 2038.10){
        renta = (salario - 895.24)*0.2 + 60.00;
    }else{
        renta = (salario - 2038.10)*0.3 + 288.57;
    }

    printf("La renta es: %lf\n", renta);
    printf("Sueldo liquido: %lf", resultado-renta);

    return 0;
}