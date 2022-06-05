/*
Faça umam função que receba a altura e o raio de um cilindro circular e retorne o volume
do cilindro. O volume de um cilindro circular é calculado por meio da seguinte fórmula:
V = pi * raio² * altura, onde pi = 3.141592. 
*/

#include<stdio.h>

float PI = 3.141592;

float volCilindro(float a, float r){
    return PI * (r*r) * a;
}

int main()
{
    printf("%.2f",volCilindro(2,2));
    return 0;
}
