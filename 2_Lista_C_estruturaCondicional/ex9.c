/*
Uma lanchonete possui vários produtos. Cada produto possui um código e um preço. 
Você deve fazer um programa para ler o código e a quantidade comprada de um produto (suponha um código válido), 
e dai informar qual o valor a ser pago, com duas casas decimais, conforme tabela de produtos ao lado.

Codigo      Preço do Produto
1           5.00
2           3.50
3           4.80
4           8.90
5           7.32

*/

#include<stdio.h>

int main()
{
    int cod, quant;
    float preco;

    printf("Codigo: ");
    scanf("%i",&cod);

    printf("Quantidade: ");
    scanf("%i",&quant);

    switch (cod)
    {
    case 1:
        preco = quant*5;
        break;
    case 2:
        preco = quant*3.50;
        break;
    case 3:
        preco = quant*4.80;
        break;
    case 4:
        preco = quant*8.90;
        break;
    case 5:
        preco = quant*7.32;
        break;
    default:
        break;
    }

    printf("Valor a pagar: %.2f",preco);

    return 0;
}
