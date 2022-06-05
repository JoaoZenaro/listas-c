/*
Faça um algoritmo que receba um número inteiro positivo n e calcule o seu fatorial, n!. 
*/

#include<stdio.h>

int fact(int n){
    for (int i = n-1; i > 0; i--)
    {
        n = n * i;
    }
    return n;
    
}

int main()
{
    printf("%i", fact(5));
    return 0;
}
