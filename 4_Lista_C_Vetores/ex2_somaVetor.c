/*
Faça um programa que leia N números reais e armazene-os em um vetor. Em seguida:
- Imprimir todos os elementos do vetor
- Mostrar na tela a soma e a média dos elementos do vetor 
*/

#include<stdio.h>

int main()
{
    int n,i;
    printf("Quantos valores serao digitados: ");
    scanf("%i",&n);

    float v[n], soma;
    for (i = 0; i < n; i++)
    {
        printf("Digite o %i numero: ",i+1);
        scanf("%f",&v[i]);
    }

    printf("Valores: ");
    for (i = 0; i < n; i++)
    {
        printf("%.1f ",v[i]);
        soma += v[i];
    }
    printf("\nSoma: %.2f",soma);
    printf("\nMedia: %.2f",(soma/n));
    

    return 0;
}
