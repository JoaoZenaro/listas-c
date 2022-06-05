/*
Faça uma função que receba 3 números inteiros como parâmetro, representando horas,
minutos e segundos, e os converta em segundos. 
*/

#include<stdio.h>

int convert(int h, int m, int s){
    return (h*3600)+(m*60)+s;
}

int main()
{
    printf("%i",convert(1,1,1));
    return 0;
}
