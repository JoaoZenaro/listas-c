/*
Faça uma função que receba uma temperatura em graus Celsius e retorne-a convertida
em graus Fahrenheit. A fórmula de conversão é: F = C * (9.0/5.0) + 32.0, sendo F a
temperatura em Fahrenheit e € a temperatura em Celsius. 
*/

#include<stdio.h>

float conversor(float c){
    return c * (9.0/5.0) + 32.0;
}

int main()
{
    printf("%.1f",conversor(20));
    return 0;
}
