/*
Uma empresa vai conceder um aumento percentual de salário aos seus funcionários dependendo de quanto cada pessoa ganha, 
conforme tabela ao lado. Fazer um programa para ler o salário de uma pessoa, 
dai mostrar qual o novo salário desta pessoa depois do aumento, quanto foi o aumento e qual foi a porcentagem de aumento.

Salario atual       Aumento
Até 1.000           20%

Acima de 1.000      15%
até 3.000

Acima de 3.000      10%
até 8.000

Acima de 8.000      5%

*/

#include<stdio.h>

int main()
{
    float sal, dif, por;

    printf("Salario: ");
    scanf("%f",&sal);

    if (sal <= 1000){
        por = 0.2;
    } else if (sal > 1000 && sal <= 3000){
        por = 0.15;
    } else if (sal > 3000 && sal <= 8000){
        por = 0.1;
    } else{
        por = 0.05;
    }

    dif = sal*por;

    float novoSal = sal + dif;
    printf("Novo salario: R$ %.2f\nAumento: R$ %.2f\nPorcentagem: %.0f%%",novoSal,dif,(por*100));

    return 0;
}
