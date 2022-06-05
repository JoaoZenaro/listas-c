/*
Ler dois números M e N (máximo = 10), e depois ler uma matriz MxN de números inteiros, conforme
exemplo. Em seguida, mostrar na tela somente os números negativos da matriz. 
*/

#include<stdio.h>

int main()
{
    int m,n,count=0;
    while (2>1)
    {
        printf("Linhas da matriz: ");
        scanf("%i",&m);
        printf("Colunas da matriz: ");
        scanf("%i",&n);

        if (m < 0 || m > 10 || n < 0 || n > 10)
        {
            printf("Invalido. Verifique os valores.\n");
            continue;
        } else{
            int max = m*n;
            int a[m][n],neg[max];
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    printf("Elemento [%i,%i]: ",i,j);
                    scanf("%i",&a[i][j]);

                    if (a[i][j] < 0)
                    {
                        neg[count] = a[i][j];
                        count++;
                    } else
                    {
                        neg[count] = 1;
                        count++;
                    }
                    
                }
                
            }

            for (int i = 0; i < max; i++)
            {
                if (neg[i] < 0)
                {
                    printf("%i\n",neg[i]);
                }
            }
            break;
        }
    }
    return 0;
}
