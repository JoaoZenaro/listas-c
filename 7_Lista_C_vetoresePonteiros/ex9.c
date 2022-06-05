/*
Um comerciante deseja fazer o levantamento do lucro das mercadorias que ele comercializa. Para isto, mandou digitar
um conjunto de N mercadorias, cada uma contendo nome, preço de compra e preço de venda das mesmas. Fazer um
programa que leia tais dados e determine e escreva quantas mercadorias proporcionaram:
 - lucro < 10%
 - 10% ≤ lucro ≤ 20%
 - lucro > 20%
Determine e escreva também o valor total de compra e de venda de todas as mercadorias, assim como o
lucro total.

Entrada                             Saida
4                                   Lucro abaixo de 10%: 1
Feijao 10.00 11.00                  Lucro entre 10% e 20%: 2
Arroz 12.00 12.80                   Lucro acima de 20%: 1
Oleo 5.00 5.70                      Valor total de compra: 30.00
Sal 3.00 4.00                       Valor total de venda: 33.50
                                    Lucro total: 3.50
*/

#include<stdio.h>
#include<stdlib.h>

struct prod
{
    char nome[20];
    float precoCompra;
    float precoVenda;
};

int main(){
    int n, countAb=0, countMed=0, countAc=0;
    float lucro, ttCompra=0.0, ttVenda=0.0, ttLucro=0.0;
    system("clear");//linux
    scanf("%d",&n);

    struct prod *p = malloc(n * sizeof(struct prod));

    for (size_t i = 0; i < n; i++)
    {
        scanf("%s %f %f",p[i].nome, &p[i].precoCompra, &p[i].precoVenda);
        lucro = p[i].precoVenda - p[i].precoCompra;

        ttCompra += p[i].precoCompra;

        ttVenda += p[i].precoVenda;

        ttLucro += lucro;

        lucro *= 100;

        lucro /= p[i].precoCompra;

        if(lucro < 10){
            countAb++;
        } else if (lucro >= 10 && lucro < 20){
            countMed++;
        } else if (lucro >= 20){
            countAc++;
        }

    }

    printf("\nLucro abaixo de 10%%: %d",countAb);
    printf("\nLucro entre 10%% e 20%%: %d",countMed);
    printf("\nLucro acima de 20%%: %d",countAc);
    printf("\nValor total de compra: %.2f",ttCompra);
    printf("\nValor total de venda: %.2f",ttVenda);
    printf("\nLucro total: %.2f\n",ttLucro);

    return 0;
}