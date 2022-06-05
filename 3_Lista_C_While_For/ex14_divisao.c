/*
Problema "divisao" (adaptado de URI 1116)
Escreva um algoritmo que leia dois números e imprima o resultado da divisão do primeiro pelo
segundo. Caso não for possível, mostre a mensagem “DIVISÃO IMPOSSIVEL”. 
*/
#include<stdio.h>

int main()
{
    int c,n,d;

    printf("Numero de casos: ");
    scanf("%i",&c);

    for (int i = 0; i < c; i++)
    {
        printf("Numerador: ");
        scanf("%i",&n);
        
        printf("Denominador: ");
        scanf("%i",&d);

        if (d == 0)
        {
            printf("Divisao Impossivel\n");
        } else{
            printf("Divisao: %.2f\n",(float)n/d);
        }
        
    }
    

    return 0;
}
