/*
Faça um programa que leia N números reais e armazene-os em um vetor. Em seguida, mostrar na tela o maior número
do vetor (supor não haver empates). Mostrar também a posição do maior elemento.

Entrada                             Saída
6                                   14.0
8.0 4.0 10.0 14.0 13.0 7.0          3
*/

#include<stdio.h>
#include<stdlib.h>

// Nao eh necessario digitar quantos itens serao coletados
int main(){
    int count=0, lgstPos;
    char temp;
    float *p = (float *)malloc(1 * sizeof(float));
    float lgst = 0.0;

    system("clear"); // linux
    
    do {
        scanf("%f%c", &p[count], &temp);
        
        if(p[count] > lgst){
            lgst = p[count];
            lgstPos = count;
        }
        
        count++;
        p = realloc(p, (count+1)*sizeof(float));

    } while(temp != '\n');

    printf("Maior numero: %.1f\nPosicao: %d\n",lgst,lgstPos);

    return 0;
}