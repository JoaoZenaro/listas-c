/*
Fazer um programa para ler os très coeficientes de uma equação do segundo grau. Usando a fórmula de Baskara, 
calcular e mostrar os valores das raizes xl e x2 da equação com quatro casas decimais, conforme exemplo. 
Se a equação não possuir raizes reais, mostrar uma mensagem.


- b +- raiz(b² -4.a.c)
----------------------
        2.a


*/

#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,c;

    printf("Digite o valor de A: ");
    scanf("%f",&a);
    printf("Digite o valor de B: ");
    scanf("%f",&b);
    printf("Digite o valor de C: ");
    scanf("%f",&c);

    float delta = ((b*b)-(4*a*c));

    if (delta < 0) {
        printf("Esta equacao nao possui raizes reais");
    } else{
        float result1 = ((b*-1)+sqrt(delta))/(2*a);
        printf("X1: %.4f",result1);

        float result2 = ((b*-1)-sqrt(delta))/(2*a);
        printf("\nX2: %.4f",result2);
    }
    
    
    return 0;
}