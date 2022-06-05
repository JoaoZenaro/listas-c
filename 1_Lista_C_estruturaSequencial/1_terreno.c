#include<stdio.h>

int main()
{
    float largura, comprimento, valorPorMetro;

    printf("Digite a largura: ");
    scanf("%f",&largura);

    printf("Digite o comprimento: ");
    scanf("%f",&comprimento);
    
    printf("Digite o valor por metro: ");
    scanf("%f",&valorPorMetro);

    float area = largura*comprimento;

    float valorTotal = valorPorMetro*area;

    printf("Area do terreno = %.2f\n",area);

    printf("Valor do terreno = %.2f",valorTotal);

    return 0;
}
