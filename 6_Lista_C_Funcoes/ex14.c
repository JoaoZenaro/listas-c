/*
Faça uma função que receba a distância em Km e a quantidade de litros de gasolina
consumidos por um carro em um percurso, calcule o consumo em Km/l e escreva uma
mensagem de acordo com a tabela abaixo:

consumo     km/l       mensagem
menor que   8          venda o carro
entre       8 e 14     economico
maior que   12         super economico

*/

#include<stdio.h>

void calc(float km, float l){
    float m = km/l;
    if (m < 8)
    {
        printf("Venda o carro!");
    } else if (m >= 8 && m <=12)
    {
        printf("Economico!");
    } else if (m > 12)
    {
        printf("Super economico!");
    }
}

int main()
{
    calc(12,1);
    return 0;
}
