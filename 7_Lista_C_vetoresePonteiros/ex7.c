/*
Fazer um programa para ler um conjunto de N nomes de alunos, bem como as notas que eles tiraram no 1º e 2º semestres.
Cada uma dessas informações deve ser armazenada em um vetor. Depois, imprimir os nomes dos alunos aprovados,
considerando aprovados aqueles cuja média das notas seja maior ou igual a seis.

Entrada                             Saida
4                                   Alunos aprovados:
Joao 7.0 8.5                        Joao
Maria 9.2 6.5                       Maria
Carlos 5.0 6.0                      Teresa
Teresa 5.5 6.5
*/

#include<stdio.h>
#include<stdlib.h>

struct aluno
{
    char nome[20];
    float n1;
    float n2;
};


int main(){
    int n;
    float avg;
    system("clear");//linux
    scanf("%d",&n);

    struct aluno *a = malloc(n * sizeof(struct aluno));

    for (size_t i = 0; i < n; i++)
    {
        scanf("%s %f %f", a[i].nome,&a[i].n1,&a[i].n2);
    }
    
    printf("\nAlunos aprovados: \n");
    for (size_t i = 0; i < n; i++)
    {
        avg = a[i].n1 + a[i].n2;
        avg /= 2;
        if(avg >= 6){
            printf("%s\n",a[i].nome);
        }
    }

    return 0;
}
