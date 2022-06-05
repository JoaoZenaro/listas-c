/*
Fazer um programa para ler um conjunto de N nomes de alunos, bem como as notas que eles tiraram
no 1º e 2º semestres. Cada uma dessas informações deve ser armazenada em um vetor. Depois, imprimir
os nomes dos alunos aprovados, considerando aprovados aqueles cuja média das notas seja maior ou
igual a 6.0 (seis). 
*/

#include<stdio.h>
#include<string.h>

int main()
{
    int n;

    printf("Quantos alunos serao digitados: ");
    scanf("%i",&n);

    char nomes[n][50];
    float n1[n],n2[n];

    for (int i = 0; i < n; i++)
    {
        printf("Digite nome, primeira e segunda nota do %io aluno:\n",i+1);
        //Limpa buffer de entrada
        fseek(stdin,0,SEEK_END);
        //Ler a String digitada até o usuário pressionar enter
        scanf("%[^\n]", nomes[i]);

        scanf("%f",&n1[i]);
        scanf("%f",&n2[i]);   
    }
    printf("Alunos aprovados: \n");
    int t;
    for (int i = 0; i < n; i++)
    {
        t = (n1[i]+n2[i])/2;
        if (t >= 6)
        {
            printf("%s",nomes[i]);
        }
        
    }
    
    return 0;
}
