/*
Fazer um programa para ler um vetor de N números inteiros. Em seguida, mostrar na tela a média aritmética somente
dos números pares lidos.

Entrada                             Saida
6                                   11.0
8 2 11 14 13 20
*/

#include<stdio.h>
#include<stdlib.h>

// Nao eh necessario digitar quantos itens serao coletados
int main(){
    int count=0, evenCount=0;
    char temp;
    int *v = (int *)malloc(1 * sizeof(int));
    float avg;

    system("clear"); // linux
    
    do { 
        scanf("%d%c", &v[count], &temp);
        
        if(v[count] % 2 == 0){
            avg += v[count];
            evenCount++;
        }

        count++;
        v = realloc(v, (count+1)*sizeof(int));
    } while(temp != '\n');

    avg /= evenCount;

    printf("\n%.1f\n", avg);

    return 0;
}