/*
Tem-se um conjunto de dados contendo a altura e o sexo (M, F) de N pessoas. Fazer um programa que calcule e escreva:
 - a maior e a menor altura do grupo
 - a média de altura das mulheres
 - o número de homens

Entrada                             Saida
5                                   Menor altura = 1.54
1.70 F                              Maior altura = 1.83
1.83 M                              Media das alturas das mulheres = 1.69
1.54 M                              Numero de homens = 2
1.61 F
1.75 F                    
*/

#include<stdio.h>
#include<stdlib.h>

struct pessoa
{
    char sexo;
    float altura;
};


int main(){
    int n, countM=0, countF=0;
    float max=0.0, min=5.0, avgF=0.0;
    system("clear");//linux
    scanf("%d",&n);

    struct pessoa *p = malloc(n * sizeof(struct pessoa));

    for (size_t i = 0; i < n; i++)
    {
        scanf("%f %c", &p[i].altura,&p[i].sexo);
        if(p[i].altura > max){
            max = p[i].altura;
        }
        
        if(p[i].altura < min){
            min = p[i].altura;
        }

        if(p[i].sexo == 'f'){
            avgF += p[i].altura;
            countF++;
        } else if (p[i].sexo == 'm')
        {
            countM++;
        }
    }
    
    printf("Menor altura = %.2f\nMaior altura = %.2f",min,max);
    printf("\nMedia das alturas das mulheres = %.2f\nNumero de homens = %d\n",(avgF/countF),countM);

    return 0;
}