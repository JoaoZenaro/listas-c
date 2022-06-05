/*
Faça um programa que leia N números reais e armazene-os em um vetor. Em seguida, mostrar na tela
o maior número do vetor (supor não haver empates). Mostrar também a posição do maior elemento,
considerando a primeira posição como O (zero). 
*/

#include<stdio.h>

int main()
{
    int n,pos;

    printf("Digite a quantia de numeros: ");
    scanf("%i",&n);

    float v[n],maior=0.0;

    for (int i = 0; i < n; i++)
    {
        scanf("%f",&v[i]);
        if (v[i] >= maior)
        {
            maior = v[i];
            pos = i;
        }   
    }

    printf("O maior numero foi %.2f na posicao %i",maior,pos);
    return 0;
}
