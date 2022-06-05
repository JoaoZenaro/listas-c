/*
Leia a hora inicial e a hora final de um jogo. A seguir calcule a duração do jogo, 
sabendo que o mesmo pode começar em um dia e terminar em outro, tendo uma duração minima de 1 hora e máxima de 24 horas,
*/

#include<stdio.h>

int main()
{
    int hi, hf;

    printf("Hora inicial: ");
    scanf("%i",&hi);

    printf("Hora final: ");
    scanf("%i",&hf);
    
    if (hi > 24 || hi < 0 || hf < 0 || hf > 24){
        printf("Invalido");

    } else if (hi == hf) {
        printf("O jogo durou 24 Horas");

    } else if (hi > hf) {
        printf("O jogo durou %i Horas",((24-hi)+hf));

    } else if (hf > hi) {
        printf("O jogo durou %i Horas",(hf-hi));
        
    }
    


    return 0;
}
