/*
Ler um inteiro N e uma matriz quadrada de ordem N (máximo = 10). Mostrar qual o maior elemento
de cada linha. Suponha não haver empates. 
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
            int m[n][n], maior[n];
            for (int i = 0; i < n; i++)
            {
                maior[i] = 0;
                for (int j = 0; j < n; j++)
                {
                    printf("Elemento [%i,%i]: ",i,j);
                    scanf("%i",&m[i][j]);
                    if (m[i][j] > maior[i]);
                    {
                        maior[i] = m[i][j];
                    }
                    
                }
            }
            printf("Maior elemento de cada linha:\n");
            for (int i = 0; i < n; i++)
            {
                printf("%i\n",maior[i]);
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
