/*
Problema "dentro fora" (adaptado de URI 1072)
Leia um valor inteiro N. Este valor será a quantidade de valores inteiros X que serão lidos em seguida.
Mostre quantos destes valores X estão dentro do intervalo [10,20] e quantos estão fora do intervalo,
conforme exemplo 
*/
#include<stdio.h>

int main()
{
    int n,x,dentro=0,fora=0;
    printf("Quantos numeros serao digitados: ");
    scanf("%i",&n);

    for (int i = 0; i < n; i++)
    {
        printf("Digite um numero: ");
        scanf("%i",&x);
        if (x >= 10 && x <= 20)
        {
            dentro++;
        } else{
            fora++;
        }
    }

    printf("%i Dentro\n%i Fora",dentro,fora);

    return 0;
}
