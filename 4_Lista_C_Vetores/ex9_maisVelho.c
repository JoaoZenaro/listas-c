/*
Fazer um programa para ler um conjunto de nomes de pessoas e suas respectivas idades. Os nomes
devem ser armazenados em um vetor, e as idades em um outro vetor. Depois, mostrar na tela o nome
da pessoa mais velha. 

*/

#include<stdio.h>

int main()
{
    int n,maior=0,pos;

    printf("Quantas pessoas serao digitadas: ");
    scanf("%i",&n);

    char nomes[n][10];
    int idades[n];

    for (int i = 0; i < n; i++)
    {
        printf("Dados da %ia pessoa",i+1);
        printf("\nNome: ");
        scanf("%s",&nomes[i]);

        printf("Idade: ");
        scanf("%i",&idades[i]);
        if (idades[i] > maior)
        {
            maior = idades[i];
            pos = i;
        }
        
    }

    printf("Pessoa mais velha: %s",nomes[pos]);


    return 0;
}