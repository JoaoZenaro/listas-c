/*
Fazer um programa para calcular o troco no processo de pagamento de um produto de uma mercearia. 
O programa deve ler o preço unitário do produto, a quantidade de unidades compradas deste produto, e o valor em dinheiro dado pelo cliente. 
Seu programa deve mostrar o valor do troco a ser devolvido ao cliente. 
Se o dinheiro dado pelo cliente não for suficiente, mostrar uma mensagem informando of valor restante conforme exemplo.
*/

#include<stdio.h>

int main()
{
    float preco, valorDado, troco;
    int quant;

    printf("Digite o preco do produto: ");
    scanf("%f",&preco);

    printf("Digite a quantidade de produtos comprados: ");
    scanf("%i",&quant);

    printf("Digite o valor recebido: ");
    scanf("%f",&valorDado);
    
    if(valorDado < (preco*quant)){
        printf("Valor insuficiente\nDiferenca = %.2f",(preco*quant)-valorDado);
    } else{
        troco = valorDado-(preco*quant);
        printf("\nTroco = %.2f",troco);
    }
    

    return 0;
}
