#include <stdio.h>
#define TAM 5

//Link del repositorio: https://github.com/JuanRivalta/calculadora-bmi

void escanear_productos(int codigos[], float precios[]){
    for(int i=0;i<TAM;i++){
        do{
            printf("\nIngrese el codigo de barras (1-999999999):");
            scanf("%d", &codigos[i]);
            if(codigos[i] < 0 || codigos[i] > 999999999){
                printf("\nError. El codigo de barras debe estar entre 1 y 999999999\n");
            }
        }while(codigos[i] < 0 || codigos[i] > 999999999);
        do{
            printf("\nIngrese el precio:");
            scanf("%f", &precios[i]);
            if(precios[i] < 0){
                printf("\nError. El precio debe ser positivo\n");
            }
        }while(precios[i] < 0);
    }
}
void mostrar_productos(int codigos[], float precios[]){
    printf("\nCodigo de barra  Precios");
    for(int i=0;i<TAM;i++){
        printf("\n   %d              %.2f\n", codigos[i], precios[i]);
    }
}
void mas_caro(int codigos[], float precios[]){
    float precio_caro = precios[0];
    int codigo_caro = codigos[0];
    for(int i=0;i<TAM;i++){
        if(precio_caro < precios[i]){
            precio_caro = precios[i];
            codigo_caro = codigos[i];
        }
    }
    printf("\nProducto mas caro:\nCodigo: %d\nPrecio: %.2f\n", codigo_caro, precio_caro);
}
void mas_barato(int codigos[], float precios[]){
    float precio_barato = precios[0];
    int codigo_barato = codigos[0];;
    for(int i=0;i<TAM;i++){
        if(precio_barato > precios[i]){
            precio_barato = precios[i];
            codigo_barato = codigos[i];
        }
    }
    printf("\nProducto mas barato:\nCodigo: %d\nPrecio: %.2f\n", codigo_barato, precio_barato);
}

int main(){
    int codigos[TAM];
    float precios[TAM];
    

    printf("Ingrese %d codigos de barra con su respectivo precio\n", TAM);
    escanear_productos(codigos, precios);
    mostrar_productos(codigos, precios);
    mas_caro(codigos, precios);
    mas_barato(codigos, precios);
}