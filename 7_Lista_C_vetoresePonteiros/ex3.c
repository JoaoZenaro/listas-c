/*
Faça um programa para ler dois vetores A e B, contendo N elementos cada. Em seguida, gere um terceiro vetor C onde
cada elemento de C é a soma dos elementos correspondentes de A e B. Imprima o vetor C gerado.

Entrada                     Saida
6                           13 12 14 15 23 27
8 2 11 14 13 20             
5 10 3 1 10 7
*/

#include<stdio.h>
#include<stdlib.h>

// Nao eh necessario digitar quantos itens serao coletados
int main(){
    int count=0;
    char temp;
    int *a = (int *)malloc(1 * sizeof(int));

    system("clear"); // linux
    
    printf("Vetor A: ");
    do { 
        scanf("%d%c", &a[count], &temp);
        
        count++;
        a = realloc(a, (count+1)*sizeof(int));
    } while(temp != '\n');

    //definir b com tamanho de a
    int *b = (int *)malloc(count * sizeof(int));

    int *c = (int *)malloc(count * sizeof(int));

    count = 0;

    printf("Vetor B: ");
    do {
        scanf("%d%c", &b[count], &temp);
        
        c[count] = a[count] + b[count];
        
        count++;  
    } while(temp != '\n');

    printf("Vetor C: ");
    for (size_t i = 0; i < count; i++)
    {
        printf("%d ", c[i]);
    }
    
    putchar('\n');

    return 0;
}