#include<stdio.h>

int main()
{
    float preco, valorDado, troco;
    int quant;

    printf("Digite o preco do produto: ");
    scanf("%f",&preco);

    printf("Digite a quantidade de produtos comprados: ");
    scanf("%i",&quant);

    printf("Digite o valor pago: ");
    scanf("%f",&valorDado);
    
    troco = valorDado-(preco*quant);
    
    printf("\nTroco = %.2f",troco);

    return 0;
}
