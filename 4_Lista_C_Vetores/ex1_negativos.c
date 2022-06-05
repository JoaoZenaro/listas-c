/*
Faça um programa que leia um número inteiro positivo N (máximo = 10) e depois N números inteiros
e armazene-os em um vetor. Em seguida, mostrar na tela todos os números negativos lidos. 
*/

#include<stdio.h>

int main()
{
    int n;

    while (2>1)
    {
        printf("Digite um numero entre 1 e 10: ");
        scanf("%i",&n);
        if (n<1 || n>10)
        {
            printf("Nao\n");
            continue;
        }

        int v[n];
        for (int i=0; i < n; i++)
        {
            printf("Digite o %i numero: ",i+1);
            scanf("%i",&v[i]);
        }

        for (int i=0; i < n; i++)
        {
            if (v[i]<0)
            {
                printf("%i\n",v[i]);
            }
            
        }
        
    }
    
    
    return 0;
}
