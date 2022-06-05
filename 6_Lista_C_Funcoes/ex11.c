/*
Elabore uma função que receba três notas de um aluno como parâmetros e uma letra.
Se a letra for A, a função deverá calcular a média aritmética das notas do aluno; se for P,
deverá calcular a média ponderada, com pesos 5, 3 e 2. 
*/

#include<stdio.h>

char a='a',p='p';

float calcular(float n1,float n2, float n3, char e){
    if (e == a)
    {
        return (n1+n2+n3)/3;
    } else{
        return ((n1*5)+(n2*3)+(n3*2))/10;
    }
}

int main()
{
    printf("%.1f\n",calcular(5,8,10,a));
    printf("%.1f",calcular(5,8,10,p));
    return 0;
}
