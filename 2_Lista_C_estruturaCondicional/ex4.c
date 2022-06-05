/*
Uma operadora de telefonia cobra RS 50.00 por um plano básico que dá direito a 100 minutos de telefone. 
Cada minuto que exceder a franquia de 100 minutos custa RS 2.00. 
Fazer um programa para ler a quantidade de minutos que uma pessoa consumiu, dai mostrar o valor a ser pago.
*/

#include<stdio.h>

int main()
{
    int min, v=50;

    printf("Minutos consumidos: ");
    scanf("%i",&min);

    if(min <= 100){
        printf("Valor: %i",50);
    } else{
        int temp = 50+(min-100)*2;
        printf("Valor: R$ %i.00",temp);
    }

    return 0;
}