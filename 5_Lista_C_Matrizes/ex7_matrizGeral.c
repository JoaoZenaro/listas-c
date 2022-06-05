/*
Ler uma matriz quadrada de ordem N (máximo = 10), contendo números reais. Em seguida, fazer as
seguintes ações:
a) calcular e imprimir a soma de todos os elementos positivos da matriz.
b) fazer a leitura do índice de uma linha da matriz e, daí, imprimir todos os elementos desta linha.
c) fazer a leitura do índice de uma coluna da matriz e, daí, imprimir todos os elementos desta coluna.
d) imprimir os elementos da diagonal principal da matriz.
e) alterar a matriz elevando ao quadrado todos os números negativos da mesma. Em seguida imprimir
a matriz alterada. 

*/

#include<stdio.h>

int main()
{
    int n;

    while (1)
    {     
        printf("Ordem da matriz (max=10): ");
        scanf("%i",&n);

        if (n > 0 && n <11)
        {
            float m[n][n],somaPos=0;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    printf("Elemento [%i,%i]: ",i,j);
                    scanf("%f",&m[i][j]);
                    
                    if (m[i][j]>0)
                    {
                        somaPos += m[i][j];
                    }
                }
            }
            printf("Soma dos positivos: %.1f\n",somaPos);
            
            int lin,col;
            printf("Escolha uma linha: ");
            scanf("%i",&lin);
            printf("Linha escolhida: ");
            for (int i = 0; i < n; i++)
            {
                printf("%.1f ",m[lin][i]);
            }

            printf("\nEscolha uma coluna: ");
            scanf("%i",&col);
            for (int i = 0; i < n; i++)
            {
                printf("%.1f ",m[i][col]);
            }
            
            printf("\nMatriz alterada: \n");
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (m[i][j] < 0)
                    {
                        printf("%.1f ",(m[i][j]*m[i][j]));
                    } else
                    {
                        printf("%.1f ",m[i][j]);
                    }
                    
                }
                printf("\n");
            }

            break;
            
        } else
        {
            printf("Invalido.\n");
            continue;
        }
    } 
    return 0;
}
