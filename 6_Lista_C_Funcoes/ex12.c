/*
Escreva uma função que receba um número inteiro maior do que zero e retorne a soma
de todos os seus algarismos. Por exemplo, ao número 251 corresponderá o valor 8 (2
+ 5 + 1). Se o número lido não for maior do que zero, o programa terminará com a
mensagem “Número inválido”. 
*/

#include<stdio.h>
#include<stdlib.h>

int calc(int n){
    int d,sum=0;
    while (n != 0)
    {
        d = n % 10;
        n = n / 10;
        sum += d;
    }
    return sum;
}

int main()
{
    system("cls");
    int n;
    while (1)
    {
        printf("Digite um numero: ");
        scanf("%i",&n);
        if (n>0)
        {
            printf("%i\n",calc(n));
        } else{
            printf("Invalido\n");
            break;
        }
        
    }
    
    return 0;
}
