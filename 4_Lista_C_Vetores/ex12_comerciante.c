/*
Um comerciante deseja fazer o levantamento do lucro das mercadorias que ele comercializa. Para isto,
mandou digitar um conjunto de N mercadorias, cada uma contendo nome, preço de compra e preço de
venda das mesmas. Fazer um programa que leia tais dados e determine e escreva quantas mercadorias
proporcionaram:
    lucro< 10%
    10%< lucro <20%
    lucro >20%
Determine e escreva também o valor total de compra e de venda de todas as mercadorias, assim como
o lucro total. 
*/

#include<stdio.h>

int main()
{
    int n,lucroAb=0,lucroAc=0,lucroMed=0;
    printf("Numero de produtos: ");
    scanf("%i",&n);

    char nomes[n][20];
    float precoCompra[n],precoVenda[n],lucro,ttCompra=0.0,ttVenda=0.0;

    for (int i = 0; i < n; i++)
    {
        printf("Produto %i:\n",i+1);

        printf("Nome: ");
        scanf("%s",&nomes[i]);

        printf("Preco de compra: ");
        scanf("%f",&precoCompra[i]);
        ttCompra += precoCompra[i];

        printf("Preco de venda: ");
        scanf("%f",&precoVenda[i]);
        ttVenda += precoVenda[i];
    }

    for (int i = 0; i < n; i++)
    {
        lucro =  100.0-((precoVenda[i]*100)/precoCompra[i]);
        lucro *= -1;
        
        if (lucro < 10)
        {
            lucroAb++;
        } else if (lucro >= 10 && lucro <= 20)
        {
            lucroMed++;
        } else if (lucro > 20)
        {
            lucroAc++;
        }
    }

    printf("Relatorio:\n");
    printf("Lucro abaixo de 10%%: %i\n",lucroAb);
    printf("Lucro entre 10%% e 20%%: %i\n",lucroMed);
    printf("Lucro acima de 20%%: %i\n",lucroAc);

    printf("Valor total de compra: %.2f\n",ttCompra);
    printf("Valor total de venda: %.2f\n",ttVenda);
    printf("Lucro total: %.2f",ttVenda-ttCompra);
    
    return 0;
}
