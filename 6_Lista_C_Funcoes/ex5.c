/*
Faça uma função e um programa de teste para o cálculo do volume de uma esfera.
Sendo que o raio é passado por parâmetro.
V=4/3*pi*R³ 
*/

#include<stdio.h>
#include <stdlib.h>

float volumeEsfera(float r){
    float pi = 3.14159;
    float vol = (4*pi*(r*r*r))/3;
    return vol;
}


int main()
{
    system("cls");
    float r;
    while (1)
    {
        printf("Digite o raio da esfera (numero negativo para sair do programa): ");
        scanf("%f",&r);
        if (r < 0)
        {
            break;
        } else{
            printf("Volume: %.2f\n",volumeEsfera(r));
        }
    }
    return 0;
}
