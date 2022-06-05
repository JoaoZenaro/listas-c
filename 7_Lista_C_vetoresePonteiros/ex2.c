/*
Faça um programa que leia N números inteiros e armazene-os em um vetor. Em seguida, mostre na tela:
- todos os números pares
- a quantidade de números pares

Entrada                 Saída
6                       8 2 14 20
8 2 11 14 13 20         4
*/

#include<stdio.h>
#include<stdlib.h>

// Nao eh necessario digitar quantos itens serao coletados
int main(){
    int count=0, evenCount=0;
    char temp;
    int *p = (int *)malloc(1 * sizeof(int));

    system("clear"); // linux
    
    do {
        scanf("%d%c", &p[count], &temp);
        
        if(p[count] % 2 == 0){
            evenCount++;
        }
        
        count++;
        p = realloc(p, (count+1)*sizeof(int));

    } while(temp != '\n');

    for (size_t i = 0; i < count; i++)
    {
        if(p[i] % 2 == 0){
            printf("%d ",*(p + i));
        }
    }
    printf("\n%d",evenCount);

    return 0;
}