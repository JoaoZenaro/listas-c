/*
Fazer um programa para ler um vetor de N números inteiros. Em seguida, mostrar na tela a média
aritmética somente dos números pares lidos, com uma casa decimal. Se nenhum número par for
digitado, mostrar a mensagem "NENHUM NUMERO PAR" 

*/

#include<stdio.h>

int main()
{
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%i",&n);

    int v[n], soma=0,count=0;
    printf("Digite os valores: \n");

    for (int i = 0; i < n; i++)
    {
        scanf("%i",&v[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (v[i] % 2 == 0)
        {
            soma += v[i];
            count++;
        }
        
    }
    if (soma == 0)
    {
        printf("Nenhum numero par");
    } else{
        printf("Media: %.1f",(float)(soma/count));
    }
    
    
    return 0;
}
