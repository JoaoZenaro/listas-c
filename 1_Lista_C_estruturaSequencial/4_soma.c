#include<stdio.h>

int main()
{
    int x,y;

    printf("Digite dois numeros divididos por espaco: ");
    scanf("%i %i",&x,&y);

    int soma = x+y;
    printf("O resultado da soma foi: %i",soma);

    return 0;
}
