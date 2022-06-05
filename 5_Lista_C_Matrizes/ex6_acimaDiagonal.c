/*
Ler um inteiro N (máximo = 10) e uma matriz quadrada de ordem N
contendo números inteiros. Mostrar a soma dos elementos acima da
diagonal principal. Um exemplo de números acima da diagonal
principal é mostrado ao lado. 

5  (2) (3) (1)
8   2  (4) (5)
7   3   1  (3)
9   12  9   5


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
            int m[n][n],soma=0;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    printf("Elemento [%i,%i]: ",i,j);
                    scanf("%i",&m[i][j]);
                    
                    if (j > i)
                    {
                        soma += m[i][j];
                    }
                }
            }
            printf("Soma dos elementos acima da diagonal principal: %i",soma);
            break;
            
        } else
        {
            printf("Invalido.\n");
            continue;
        }
    }
    return 0;
}
