/*
Fazer um programa para ler dois números inteiros, e dizer se um número é multiplo do outro. 
Os números podem ser digitados em qualquer ordem.

maior/menor resto 0
*/

#include<stdio.h>

int main()
{
    int n1,n2;
    printf("Digite dois numeros inteiros separados por espaco: ");
    scanf("%i %i",&n1,&n2);

    if (n2 > n1)
    {
        if (n2 % n1 == 0)
        {
            printf("%i e %i sao multiplos",n1,n2);
        } else{
            printf("%i e %i NAO sao multiplos",n1,n2);
        }
    } else{
        if (n1 % n2 == 0)
        {
            printf("%i e %i sao multiplos",n1,n2);
        } else{
            printf("%i e %i NAO sao multiplos",n1,n2);
        }
    }
    
    return 0;
}
