/*Fazer um programa para ler as duas notas que um aluno obteve no primeiro e segundo semestres de uma disciplina anual. 
Em seguida, mostrar a nota final que o aluno obteve (com uma casa decimal) no ano juntamente com um texto explicativo. 
Caso a nota final do aluno seja inferior a 60.00, mostrar a mensagem "REPROVADO", conforme exemplos. */

#include<stdio.h>

int main()
{
    //Somente soma das notas
    float n1,n2;

    printf("Digite a primeira nota: ");
    scanf("%f",&n1);
    
    printf("Digite a segunda nota: ");
    scanf("%f",&n2);

    float f = n1+n2;
    printf("Nota final: %.1f",f);

    if (f < 60.0){
        printf("\nREPROVADO");
    }
    
    return 0;
}
