/*
Crie uma função que receba como parâmetro um valor inteiro e gere como saída n linhas
com pontos de exclamação, conforme o exemplo abaixo (para n = 5):

!
!!
!!!
!!!!
!!!!!

*/

#include<stdio.h>
#include<stdlib.h>

void func(int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            printf("!");
        }
        printf("\n");
    }
    
}

int main()
{
    system("cls");
    func(3);
    return 0;
}
