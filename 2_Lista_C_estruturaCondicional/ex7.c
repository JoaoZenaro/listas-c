/*
No arremesso de dardo, o atleta tem três chances para lançar o dardo à maior distância que conseguir. 
Você deve criar um programa para, dadas as medidas das três tentativas de lançamento, informar qual foi a maior.
*/

#include<stdio.h>

int main()
{
    int a = 3;
    float n[a];

    printf("Digite as tres distancias: \n");
    for (int i = 0; i < a; i++){
        scanf("%f", &n[i]);
    }

    float maior = n[0];

    for (int i = 0; i < a; i++)
    {
        if (n[i] >= maior)
        {
            maior = n[i];
        }  
    } 

    printf("Maior distancia: %.2f",maior);
    
    return 0;
}
