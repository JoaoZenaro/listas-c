/*
Faça uma função que retorne o maior fator primo de um número. 
*/

#include<stdio.h>
#include<math.h>

int ePrimo(int n){
    int b=1;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            b=0;
            return 0;
        }
    }
    return 1;
}

void fatorPrimo(int n){
    int maior;
    for (int i = 0; i <= n; i++)
    {
        if (ePrimo(i) == 1)
        {
            maior = i;
        }
        
    }
    printf("%i",maior);
}

int main()
{
    fatorPrimo(10);
    
    return 0;
}
