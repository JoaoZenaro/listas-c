/*
Problema "tabuada"

Ler um número inteiro N, daí mostrar na tela a tabuada de N para 1 a 10, conforme exemplo. 
*/
#include<stdio.h>

int main()
{
    int n;
    scanf("%i",&n);

    for (int i = 1; i < 11; i++)
    {
        printf("(%i*%i) = %i\n",n,i,n*i);
    }
    

    return 0;
}
