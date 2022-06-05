/*
Problema "validacao de nota" (adaptado de URI 1117)
Faça um programa que leia as notas referentes às duas avaliações de um aluno. Calcule e imprima a
média semestral. Faça com que o algoritmo só aceite notas válidas (uma nota válida deve pertencer ao
intervalo [0,10]). Cada nota deve ser validada separadamente. 

*/
#include<stdio.h>

int main()
{
    float n1,n2,media=0;

    while (media == 0)
    {    
        printf("Nota 1: ");
        scanf("%f",&n1);
        if (n1 >= 0 && n1 <= 10)
        {
            while (2>1)
            {
                printf("Nota 2: ");
                scanf("%f",&n2);
                if (n2 >= 0 && n2 <= 10)
                {
                    media = (n1+n2)/2;
                    printf("Media: %.1f",media);
                    break;
                } else{
                    printf("Invalido\n");
                    continue;
                }
            }
            
        } else{
            printf("Invalido\n");
            continue;
        }
    }
    
    
    

    return 0;
}
