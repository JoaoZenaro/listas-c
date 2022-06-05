/*
Escreva uma função que gera um triângulo lateral de altura 2*n-1 e n largura. Por exemplo, a saída para n = 4 seria:

*
**
***
****
***
**
*

*/

#include<stdio.h>

void func(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (n; n > 0; n--)
    {
        for (int j = n-1; j > 0; j--)
        {
            printf("*");
        }
        
        printf("\n");
    }
    
    
}

int main()
{
    func(10);
    return 0;
}
