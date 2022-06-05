/*
Problema "media idades"
Faça um programa para ler um número indeterminado de dados, contendo cada um, a idade de um
indivíduo. O último dado, que não entrará nos cálculos, contém um valor de idade negativa. Calcular
e imprimir a idade média deste grupo de indivíduos. Se for entrado um valor negativo na primeira vez,
mostrar a mensagem "IMPOSSIVEL CALCULAR". 
*/
#include<stdio.h>

int main()
{
    int i,count=0;
    float sum;

    while (2>1)
    {
        scanf("%i",&i);
        if (i<0 && count == 0)
        {
            printf("Impossivel Calcular");
            break;
        } else if (i>=0)
        {
            sum += (float)i;
            count++;
        } else {
            printf("A media foi %.1f",sum/count);
            break;
        }
        
    }
    return 0;
}
