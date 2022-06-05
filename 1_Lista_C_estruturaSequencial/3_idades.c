#include<stdio.h>

int main()
{
    char n1[50];
    char n2[50];
    float i1,i2;

    printf("Digite o nome da primeira pessoa: ");
    scanf("%s",&n1);

    printf("\nDigite a idade da primeira pessoa: ");
    scanf("%f",&i1);

    printf("\nDigite o nome da segunda pessoa: ");
    scanf("%s",&n2);

    printf("\nDigite a idade da segunda pessoa: ");
    scanf("%f",&i2);

    float media = (i1+i2)/2;

    printf("\nA idade media entre %s e %s foi %.1f",n1,n2,media);

    return 0;
}
