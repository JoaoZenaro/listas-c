/*
Faça uma função que receba dois valores numéricos e um símbolo. Este símbolo representará a operação que se deseja efetuar com os números. Se o símbolo for + deverá
ser realizada uma adição, se for - uma subtração, se for / uma divisão e se for * será
efetuada uma multiplicação. 
*/

#include<stdio.h>
#include<stdlib.h>

float calc(float n1,float n2, char c){
    if (c == '+')
    {
        return n1+n2;
    }else if (c == '-')
    {
        return n1-n2;
    }else if (c == '/')
    {
        return n1/n2;
    } else if (c == '*')
    {
        return n1*n2;
    }
}

int main()
{
    printf("%1.f",calc(5,5,'/'));
    return 0;
}
