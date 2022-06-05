/*
Fazer um programa para ler nome, idade e altura de N pessoas, conforme exemplo. Depois, mostrar na
tela a altura média das pessoas, e mostrar também a porcentagem de pessoas com menos de 16 anos,
bem como os nomes dessas pessoas caso houver. 
*/

#include<stdio.h>

int main()
{
    int n,i,idadeCont=0;

    printf("Quantas pessoas serao digitadas: ");
    scanf("%i",&n);

    char nomes[n][10];
    int idades[n];
    float alturas[n], altSoma=0.0;

    for (i = 0; i < n; i++)
    {
        printf("Dados da %ia pessoa",i+1);
        printf("\nNome: ");
        scanf("%s",&nomes[i]);

        printf("Idade: ");
        scanf("%i",&idades[i]);
        if (idades[i] < 16)
        {
            idadeCont++;
        }

        printf("Altura: ");
        scanf("%f",&alturas[i]);
        altSoma+=alturas[i];
    }

    printf("Media de altura: %.2f\n",altSoma/n);
    printf("Pessoas com menos de 16 anos: %.1f%%\n",(float)(idadeCont*100)/n);

    for (i = 0; i < n; i++)
    {   
        if (idades[i] < 16)
        {
            printf("%s\n",nomes[i]);
        }
    }
    
    
    return 0;
}
