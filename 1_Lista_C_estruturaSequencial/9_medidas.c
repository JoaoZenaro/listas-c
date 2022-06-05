#include<stdio.h>

int main()
{
    float a,b,c;

    printf("Medida A: ");
    scanf("%f",&a);
    printf("Medida B: ");
    scanf("%f",&b);
    printf("Medida C: ");
    scanf("%f",&c);

    float quadrado = a*a;
    float triangulo = (a*b)/2;
    float trapezio = ((a+b)/2)*c;

    printf("Area do quadrado: %.4f",quadrado);
    printf("\nArea do triangulo: %.4f",triangulo);
    printf("\nArea do trapezio: %.4f",trapezio);
    return 0;
}
