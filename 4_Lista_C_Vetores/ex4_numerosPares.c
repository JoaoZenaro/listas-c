/*
Faça um programa que leia N números inteiros e armazene-os em um vetor. Em seguida, mostre na
tela todos os números pares, e também a quantidade de números pares. 

*/

#include<stdio.h>

int main()
{
    int n;

    printf("Digite a quantia de numeros: ");
    scanf("%i",&n);

    int v[n],cont=0;

    for (int i = 0; i < n; i++)
    {
        printf("N%i: ",i+1);
        scanf("%i",&v[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (v[i] % 2 == 0)
        {
            cont++;
            printf("%i ",v[i]);
        }
        
    }
    printf("%i numeros pares",cont);

    return 0;
}
