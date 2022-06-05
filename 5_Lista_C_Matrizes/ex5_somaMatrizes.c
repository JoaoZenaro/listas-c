/*
Fazer um programa para ler duas matrizes de números inteiros A e B, contendo de M linhas e N colunas
cada (M e N máximo = 10). Depois, gerar uma terceira matriz C onde cada elemento desta é a soma
dos elementos correspondentes das matrizes originais. Imprimir na tela a matriz gerada. 
*/

#include<stdio.h>

int main()
{
    int m,n;
    while (1)
    {
        printf("Numero de linhas das matrizes (max=10): ");
        scanf("%i",&m);
        printf("Numero de colunas das matrizes (max=10): ");
        scanf("%i",&n);

        if (m < 1 || m > 10 || n < 1 || n > 10)
        {
            printf("Invalido.\n");
        } else{
            int a[m][n],b[m][n],c[m][n];
            printf("Digite os valores da matriz A:\n");
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    printf("Elemento [%i,%i]: ",i,j);
                    scanf("%i",&a[i][j]);
                } 
            }
            printf("Digite os valores da matriz B:\n");
            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    printf("Elemento [%i,%i]: ",i,j);
                    scanf("%i",&b[i][j]);
                }
            }

            for (int i = 0; i < m; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    c[i][j] = a[i][j] + b[i][j];
                    printf("%i ",c[i][j]);
                }
                printf("\n");
            }
            break;
        }
    }
    
    return 0;
}
