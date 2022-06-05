/*
Fazer um programa para ler um número inteiro N e depois um vetor de N números reais. Em seguida,
mostrar na tela a média aritmética de todos elementos com três casas decimais. Depois mostrar todos
os elementos do vetor que estejam abaixo da média, com uma casa decimal cada. 

*/

#include<stdio.h>

int main()
{
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%i",&n);

    float soma=0.0,v[n];
    for (int i = 0; i < n; i++)
    {
        printf("N%i: ",i+1);
        scanf("%f",&v[i]);
        soma += v[i];
    }
    float m = soma/n;
    printf("Media: %.3f\n",m);

    printf("Elementos abaixo da media:\n");
    for (int i = 0; i < n; i++)
    {
        if (v[i] < m)
        {
            printf("%.1f\n",v[i]);
        }
        
    }
    

    return 0;
}
