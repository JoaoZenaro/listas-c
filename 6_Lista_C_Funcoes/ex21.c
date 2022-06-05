/*
Escreva uma função para determinar a quantidade de números primos abaixo N. 
*/

#include<stdio.h>
#include<math.h>

int ePrimo(int n){
    int b=1;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            b=0;
            return 0;
        }
    }
    return 1;
}

int nPrimos(int n){
    int count=0;
    for (int i = 2; i < n; i++)
    {
        if (ePrimo(i) == 1)
        {
            count++;
        }
        
    }
    return count;
}


int main()
{
    printf("%i",nPrimos(25));
    return 0;
}
