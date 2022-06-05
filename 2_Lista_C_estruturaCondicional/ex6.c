/*
Fazer um programa para ler a quantidade de glicose no sangue de uma pessoa e depois mostrar na tela a classificação 
desta glicose de acordo com a tabela de referência ao lado.

Classificação   Glicose

Normal          Até 100mg/l

Elevado         Maior que 100 até 140mg/l

Diabetes        Maior de 140mg/l
*/

#include<stdio.h>

int main()
{
    float gli;

    printf("Glicose em mg/l: ");
    scanf("%f",&gli);

    if (gli <= 100)
    {
        printf("Normal");
    }
    else if (gli > 100 && gli <= 140)
    {
        printf("Elevado");
    }
    else
    {
        printf("Diabetes");
    }

    

    return 0;
}