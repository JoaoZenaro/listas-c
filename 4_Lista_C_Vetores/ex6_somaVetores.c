/*
Faça um programa para ler dois vetores A e B, contendo N elementos cada. Em seguida, gere um
terceiro vetor C onde cada elemento de C é a soma dos elementos correspondentes de A e B. Imprima
o vetor € gerado. 
*/

#include<stdio.h>

int main()
{
    int n;
    printf("Digite o tamanho dos vetores: ");
    scanf("%i",&n);

    int a[n],b[n],c[n];

    printf("Valores do vetor A:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%i",&a[i]);
    }
    printf("Valores do vetor B:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%i",&b[i]);
    }

    printf("Vetor C:\n");
    for (int i = 0; i < n; i++)
    {
        c[i] = a[i]+b[i];
        printf("%i\n",c[i]);
    }
    

    return 0;
}
