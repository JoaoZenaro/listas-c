/*
Faça uma função que receba por parâmetro dois valores X e Z. Calcule e retorne o
resultado de x^z para o programa principal. Atenção não utilize nenhuma função pronta
de exponenciação. 
*/

#include<stdio.h>

float calc(float n1,float n2){
    float r = 1;
    for (int i = 0; i < n2; i++)
    {
        r = r * n1;
    }
    
    return r;
}

int main()
{
    printf("%.2f",calc(5,4));
    return 0;
}
