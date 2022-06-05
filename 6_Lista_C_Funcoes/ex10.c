/*
Faça uma função que receba dois números e retorne qual deles é o maior. 
*/

#include<stdio.h>

int maior(int a, int b){
    if (a > b)
    {
        return a;
    } else{
        return b;
    }
    
}

int main()
{
    printf("%i",maior(6,1));
    return 0;
}
