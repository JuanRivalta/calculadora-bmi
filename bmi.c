#include <stdio.h>

int main(){
    float peso, altura, imc;
    
    printf("Ingrese el peso en kg: ");
    scanf("%f", &peso);
    printf("\nIngrese la altura en metros: ");
    scanf("%f", &altura);

    imc = peso / (altura*altura);

    printf("\nSu indice de masa corporal es: %.2f", imc);

    printf("\nindice| Condicion\n-----------------------------\n<18.5 | Bajo peso\n18.5 a 24.9 | Normal\n25.0 a 29.9 | Sobrepeso\n>=30| Obesidad");

    
}