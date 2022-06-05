/*
Fazer um programa para ler um vetor de N números reais. Em seguida, mostrar na tela a média aritmética de todos
elementos. Depois mostrar todos os elementos do vetor que estejam abaixo da média.

Entrada                             Saida
4                                   12.125
10.0 15.5 13.2 9.8                  10.0
                                    9.8
*/

#include<stdio.h>
#include<stdlib.h>

// Nao eh necessario digitar quantos itens serao coletados
int main(){
    int count=0;
    char temp;
    float *v = (float *)malloc(1 * sizeof(float));
    float avg;

    system("clear"); // linux
    
    do { 
        scanf("%f%c", &v[count], &temp);
        
        avg += v[count];

        count++;
        v = realloc(v, (count+1)*sizeof(float));
    } while(temp != '\n');

    avg /= count;

    printf("\n%.3f\n", avg);

    for (size_t i = 0; i < count; i++)
    {
        if(v[i] < avg){
            printf("%.1f ",v[i]);
        }
    }
    
    putchar('\n');

    return 0;
}