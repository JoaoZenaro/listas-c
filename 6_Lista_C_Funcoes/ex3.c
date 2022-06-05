/*
Faça uma função para verificar se um número é positivo ou negativo. Sendo que o valor
de retorno será 1 se positivo, -1 se negativo e O se for igual a 0. 
*/

#include<stdio.h>

int verif(int n){
    if (n>0)
    {
        return 1;
    } else if (n < 0)
    {
        return -1;
    } else{
        return 0;
    }  
}

int main()
{
    printf("%i",verif(2));
    return 0;
}
