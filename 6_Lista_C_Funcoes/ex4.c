/*
Faça uma função para verificar se um número é um quadrado perfeito. Um quadrado
perfeito é um número inteiro não negativo que pode ser expresso como o quadrado de
outro número inteiro. Ex: 1, 4,09... 
*/

#include<stdio.h>
#include<math.h>
#include<ctype.h>

void verif(int n){
    if (n < 0)
    {
        printf("Falso");
    } else{
        double a = sqrt(n);
        int temp = floor(a);
        double r = a-temp;
        if (r == 0){
            printf("Quadrado perfeito");
        } else{
            printf("Falso");
        }
    }
    
}

int main()
{
    verif(2);
    return 0;
}
