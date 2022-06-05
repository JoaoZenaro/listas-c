/*
Fazer um programa para ler très números inteiros. 
Em seguida, mostrar qual o menor dentre os três números lidos. Em caso de empate, mostrar apenas uma vez.
*/

#include<stdio.h>

int main()
{
    int a = 3;
    int n[a];

    for (int i = 0; i < a; i++){
        scanf("%i", &n[i]);
    }
    

    // printf("Digite tres inteiros separados por espaco: ");
    // scanf("%i %i %i",&n[0],&n[1],&n[2]);

    int menor = n[0];

    for (int i = 0; i < a; i++)
    {
        if (n[i] <= menor)
        {
            menor = n[i];
        }  
    } 

    printf("Menor numero: %i",menor);
    
    return 0;
}