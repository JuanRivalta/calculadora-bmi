#include <stdio.h>

int main(){
    float peso, altura, imc;
    
    do{
        printf("\nIngrese el peso en kg: ");
        scanf("%f", &peso);
        printf("\nIngrese la altura en metros: ");
        scanf("%f", &altura);
        
    if(peso <= 0 || altura <= 0){
        printf("\nLos valores deben ser positivos");

    }
   }while(peso <= 0 || altura <= 0);
   
    imc = peso / (altura*altura);
    
    printf("\nSu indice de masa corporal es: %.2f", imc);

    printf("\nindice| Condicion\n-----------------------------\n<18.5 | Bajo peso\n18.5 a 24.9 | Normal\n25.0 a 29.9 | Sobrepeso\n>=30| Obesidad");
    
    if (imc < 18.5){
        printf("\nTu condicion es: Bajo peso");
    }
    else if (imc > 18.5 && imc < 25){
        printf("\nTu condicion es: Normal");
    }
    else if (imc >= 25 && imc < 30){
        printf("\nTu condicion es: Sobrepeso");
    }
    else if (imc >= 30){
        printf("\nTu condicion es: Obesidad");
    }
}