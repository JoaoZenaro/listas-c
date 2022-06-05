/*
Problema "par impar" (adaptado de URI 1074)
Leia um valor inteiro N. Este valor será a quantidade de números inteiros que serão lidos em seguida.
Para cada valor lido, mostre uma mensagem dizendo se este valor lido é PAR ou IMPAR, e também
se é POSITIVO ou NEGATIVO. No caso do valor ser igual a zero (0), seu programa deverá imprimir
apenas NULO. 
*/
#include<stdio.h>

int main()
{
    int n,x;
    printf("Quantos numeros serao digitados: ");
    scanf("%i",&n);

    for (int i = 0; i < n; i++)
    {
        printf("Digite um numero: ");
        scanf("%i",&x);
        if (x == 0)
        {
            printf("Nulo\n");
        } else{
            if (x % 2 == 0)
            {
                printf("Par\n");
            } else {
                printf("Impar\n");
            }

            if (x > 0)
            {
                printf("Positivo\n");
            } else if (x < 0)
            {
                printf("Negativo\n");
            } 
        }
        
        
        
        
    }

    return 0;
}
