/*
Escreva uma função que gera um triângulo de altura e lados n e base 2*n-1. Por exemplo, a saída para n = 6 seria: 

     *
    ***
   *****
  *******
 *********
***********

*/

#include<stdio.h>

void func(int n){
    int margem = n-1;
    int fill = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < margem; j++)
        {
            printf(" ");
        }
        margem--;
        for (int k = 0; k < fill; k++)
        {
            printf("*");
        }
        fill += 2;
        printf("\n"); 
    }
    
}

int main()
{
    func(8);
    return 0;
}
