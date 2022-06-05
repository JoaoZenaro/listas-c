/*
Fazer um programa para ler um número inteiro N (máximo = 10) e uma matriz quadrada de ordem N
contendo números inteiros. Em seguida, mostrar a diagonal principal e a quantidade de valores
negativos da matriz. 
*/

#include<stdio.h>

int main()
{
    int n;

    while (2>1)
    {    
        printf("Qual a ordem da matriz (max=10): ");
        scanf("%i",&n);

        if (n > 0 && n < 11)
        {
            int m[n][n], neg=0;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    printf("Elemento [%i,%i]: ",i,j);
                    scanf("%i",&m[i][j]);

                    if (m[i][j] < 0)
                    {
                        neg++;
                    }
                    
                }
                
            }

            printf("Diagonal principal:\n");
            for (int i = 0; i < n; i++)
            {
                printf("%i ",m[i][i]);
            }
            printf("\nQuantidade de negativos: %i",neg);
            break;
            
        }else
        {
            printf("Valor invalido.\n");
            continue;
        }
        
        
    }
    


    return 0;
}
