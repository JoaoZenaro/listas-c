/*
Problema "fatorial" (adaptado de URI 1153)
Fazer um programa para ler um número natural N (valor máximo: 15), e depois calcular e mostrar o
fatorial de N. 

*/
#include<stdio.h>

int main()
{
    int n;
    scanf("%i",&n);
    
    if(n >= 0 && n <= 15){
        for (int i = n; i > 1; i--)
        {
            n *= i-1;
        }
        printf("%i",n);

    } else{
        return 0;
    }

    return 0;
}
