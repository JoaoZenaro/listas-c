/*
Problema "experiencias" (adaptado de URI 1094)
Maria acabou de iniciar seu curso de graduação na faculdade de medicina e precisa de sua ajuda para
organizar os experimentos de um laboratório o qual ela é responsável. Ela quer saber no final do ano,
quantas cobaias foram utilizadas no laboratório e o percentual de cada tipo de cobaia utilizada. Este
laboratório em especial utiliza três tipos de cobaias: sapos, ratos e coelhos. Para obter estas
informações, ela sabe exatamente o número de experimentos que foram realizados, o tipo de cobaia
utilizada e a quantidade de cobaias utilizadas em cada experimento. Faça um programa que leia um
valor inteiro N que indica os vários casos de teste que vem a seguir. Cada caso de teste contém um
inteiro que representa a quantidade de cobaias utilizadas e uma letra ('C', 'R' ou 'S9, indicando o tipo
de cobaia (R:Rato S:Sapo C:Coelho). Apresente o total de cobaias utilizadas, o total de cada tipo de
cobaia utilizada e o percentual de cada uma em relação ao total de cobaias utilizadas, sendo que o
percentual deve ser apresentado com dois dígitos após o ponto. 
*/
#include<stdio.h>
#include<string.h>

int main()
{
    int n,cobaias[3]={0,0,0},tempInt;
    char tempChar;

    printf("Numero de casos: ");
    scanf("%i",&n);

    //SAPO    RATO    COELHO
    for (int i = 0; i < n; i++)
    {
        printf("Quantidade de cobaias: ");
        scanf("%i",&tempInt);
        printf("Tipo de cobaia: ");
        scanf("\n%c",&tempChar);

        if (tempChar == 's')
        {
            cobaias[0] += tempInt;
        } else if (tempChar == 'r')
        {
            cobaias[1] += tempInt;
        } else if (tempChar == 'c')
        {
            cobaias[2] += tempInt;
        }
    }

    int tt = cobaias[0]+cobaias[1]+cobaias[2];
    printf("Relatorio\nTotal: %i\n  Sapos: %i\n  Ratos: %i\n  Coelhos: %i\n",tt,cobaias[0],cobaias[1],cobaias[2]);
    
    float div = 100.0/tt;
    printf("%.2f%% de sapos\n%.2f%% de ratos\n%.2f%% de coelhos",cobaias[0]*div,cobaias[1]*div,cobaias[2]*div);    
    return 0;
}
