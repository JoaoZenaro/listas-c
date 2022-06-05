/*
Deseja-se converter uma medida de temperatura da escala Celsius para Fahrenheit ou vice-versa. 
Para isso, você deve construir um programa que leia a letra "C" ou "F" indicando em qual escala vai ser informada uma temperatura. 
Em seguida o programa deve mostrar a temperatura na outra escala com duas casas decimais. 
A seguir é dada a fórmula para converter de Fahrenheit para Celsius (você deve deduzir a fórmula de Celsius para Fahrenheit: C=(5*(F-32))/9
*/

#include<stdio.h>

int main(void)
{
    char e;
    float f,c;

    printf("Fahrenheit ou Celsius (F/C)? ");
    scanf("%c",&e);

    if (e == 'f' || e == 'F')
    {
        printf("Temperatura em Fahrenheit: ");
        scanf("%f",&f);

        c = (5*(f-32))/9;
        printf("Temperatura em Celsius: %.2f",c);

    } else if (e == 'c' || e == 'C')
    {
        printf("Temperatura em Celsius: ");
        scanf("%f",&c);
        
        f = ((c*9)+32)/5;
        printf("Temperatura em Fahrenheit: %.2f",f);

    } else{
        printf("Opcao invalida");
    }
    


    return 0;
}
