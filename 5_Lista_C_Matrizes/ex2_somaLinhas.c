/*
Fazer um programa para ler dois números inteiros M e N (máximo = 10). Em seguida, ler uma matriz
de M linhas e N colunas contendo números reais. Gerar um vetor de modo que cada elemento do vetor
seja a soma dos elementos da linha correspondente da matriz. Mostrar o vetor gerado. 
*/

#include<stdio.h>

int main()
{
    int m,n;

    while (2>1)
    {
        printf("Digite a quantidade de linhas e colunas (max=10): ");
        scanf("%i %i",&m,&n);

        if (m < 0 || m > 10 || n < 0 || n > 10)
        {
            printf("Invalido. Verifique os valores.\n");
            continue;
        } else{
            float a[m][n], v[m];
        
            for (int i = 0; i < m; i++)
            {
                printf("Digite os valores da %ia linha:\n",i+1);
                for (int j = 0; j < n; j++)
                {
                    scanf("%f",&a[i][j]);
                    v[i] += a[i][j];
                }
            }

            printf("Vetor gerado:\n");
            for (int i = 0; i < m; i++)
            {
                printf("%.1f\n",v[i]);
            }
            break;

        }
    }

    return 0;
}
