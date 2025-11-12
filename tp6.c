#include <stdio.h>
#include <math.h>

//Link del repositorio: https://github.com/JuanRivalta/calculadora-bmi


void imprimirResultados(float n1, float n2, float n3, int n4)
{
    if(n4 == 1)  
    {
        printf("\nEl area del rectangulo es:%.2f", n1);
        printf("\nEl perimetro del rectangulo es:%.2f", n2);
        printf("\nLa diagonal del rectangulo es:%.2f", n3);
    }
    if(n4 == 2)
    {
        printf("\nEl area del circulo es:%.2f", n1);
        printf("\nEl perimetro del circulo es:%.2f", n2);
    }
}

float calcularAreaRectangulo(float longitud, float altura)
{
    float area;
    area = longitud * altura;
    
    return area;
}

float calcularPerimetroRectangulo(float longitud, float altura)
{
    float perimetro;
    perimetro = (longitud + altura) * 2;
    
    return perimetro;
}

float calcularDiagonalRectangulo(float longitud, float altura)
{
    float diagonal;
    diagonal = sqrt((longitud * longitud) + (altura * altura));
    
    return diagonal;
}

float calcularAreaCirculo(float radio)
{
    float PI = 3.14159265358979323846;
    float area;
    area = PI * (radio * radio);
    
    return area;
}

float calcularPerimetroCirculo(float radio)
{
    float PI = 3.14159265358979323846;
    float perimetro;
    perimetro = (2 * PI) * radio;
    
    return perimetro;
}

int main()
{
    int figura;
    float radio;
    float longitud, altura;
    float areaRectangulo, perimetroRectangulo, diagonalRectangulo;
    float areaCriculo, perimetroCirculo;
    
    
    printf("Ingrese la figura que desea calcular (1: rectangulo, 2: circulo):");
    scanf("%d", &figura);
    
    if(figura == 1)
    {
        printf("\nOpcion de rectangulo seleccionada");
        
        printf("\nIngrese la longitud del rectangulo:");
        scanf("%f", &longitud);
        printf("\nIngrese la altura del rectangulo:");
        scanf("%f", &altura);
        
        areaRectangulo = calcularAreaRectangulo(longitud, altura);
        perimetroRectangulo = calcularPerimetroRectangulo(longitud, altura);
        diagonalRectangulo = calcularDiagonalRectangulo(longitud, altura);
        
        imprimirResultados(areaRectangulo, perimetroRectangulo, diagonalRectangulo, figura);
    }
    if(figura == 2)
    {
        printf("\nOpcion de circulo seleccionada");
        
        printf("\nIngrese el radio del circulo:");
        scanf("%f", &radio);
        
        areaCriculo = calcularAreaCirculo(radio);
        perimetroCirculo = calcularPerimetroCirculo(radio);
        
        imprimirResultados(areaCriculo, perimetroCirculo, 0, figura);
    }
}