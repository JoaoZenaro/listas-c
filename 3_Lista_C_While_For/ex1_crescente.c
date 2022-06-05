/*
Problema "crescente" (adaptado de URI 1113)
Leia uma quantidade indeterminada de duplas de valores inteiros X e Y. Escreva para cada X e Y uma
mensagem que indique se estes valores foram digitados em ordem crescente ou decrescente. O
programa deve finalizar quando forem digitados dois valores iguais. 

*/
#include<stdio.h>

int main()
{
    int x,y;

    while (2>1)
    {
        scanf("%i %i",&x,&y);
        if (x>y)
        {
            printf("Decrescente\n");
        } else if (x < y){
            printf("Crescente\n");
        } else {
            break;
        }
        
    }
    

    return 0;
}
