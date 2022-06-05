/*
Faça uma função que receba dois números inteiros positivos por parâmetro e retorne a
soma dos N números inteiros existentes entre eles. 
*/

#include<stdio.h>

int sum(int a, int b){
    int result;
    if (a < b)
    {
        for (int i = a+1; i < b; i++)
        {
            result += i;
        }   
    } else if (b < a)
    {
        for (int i = b+1; i < a; i++)
        {
            result += i;
        }   
    }
    return result;
}

int main()
{
    printf("%i",sum(5,1));
    return 0;
}
