/*
Sejam a e b os catetos de um triângulo, onde a hipotenusa é obtida pela equação:
hipotenusa = raiz(a² + b²). Faça uma função que receba os valores de a e b e calcule o
valor da hipotenusa através da equação. 
*/

#include<stdio.h>
#include<math.h>

float hip(float a, float b){
    return sqrt((a*a)+(b*b));
}

int main()
{
    printf("%.1f",hip(3,4));
    return 0;
}
