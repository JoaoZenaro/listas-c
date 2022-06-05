/*
Tem-se um conjunto de dados contendo a altura e o gênero (M, F) de N pessoas. Fazer um programa
que calcule e escreva a maior e a menor altura do grupo, a média de altura das mulheres, e o número
de homens. 
*/

#include<stdio.h>
#include<string.h>

int main()
{
    int n,countF=0,countM=0;
    printf("Quantas pessoas serao digitadas: ");
    scanf("%i",&n);

    float a[n],menor=10.0,maior=0.0,somaF=0.0;
    char g[n],f='f',m='m';

    for (int i = 0; i < n; i++)
    {
        printf("Altura da %ia pessoa: ",i+1);
        scanf("%f",&a[i]);
        printf("Genero da %ia pessoa: ",i+1);
        scanf(" %c",&g[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] < menor)
        {
            menor = a[i];
        }

        if (a[i] > maior)
        {
            maior = a[i];
        }

        if (g[i] == f)
        {
            somaF += a[i];
            countF++;
        }

        if (g[i] == m)
        {
            countM++;
        }
        
    }

    printf("Menor altura: %.2f\nMaior altura: %.2f\n",menor,maior);

    printf("Media de altura das mulheres: %.2f",somaF/countF);
    printf("\nNumero de homens: %i",countM);

    return 0;
}
