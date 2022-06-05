/*
Fazer um programa para ler um conjunto de nomes de pessoas e suas respectivas idades. Depois, mostrar na tela o nome
da pessoa mais velha.

Entrada                             Saida
5                                   Pessoa mais velha: Carlos
Joao 16
Maria 21
Teresa 15
Carlos 23
Paulo 17
*/

#include<stdio.h>
#include<stdlib.h>

struct pessoa
{
    char nome[20];
    int idade;
};

int main(){
    int n, temp, oldest = 0, id;
    
    system("clear");//linux

    scanf("%d", &n);
    struct pessoa *p = malloc(n * sizeof(struct pessoa));
    
    for (size_t i = 0; i < n; i++)
    {
       scanf("%s %d",p[i].nome,&p[i].idade);

        temp = p[i].idade;
        if(temp > oldest){
            id = i;
            oldest = temp;
        }
    }
    
    printf("Pessoa mais velha: %s\n",p[id].nome);

    return 0;
}