/*
Problema "media ponderada" (adaptado de URI 1079)
Leia um valor inteiro N, que representa o número de casos de teste que vem a seguir. Cada caso de
teste consiste de 3 valores reais, para os quais você deverá calcular e mostrar a média ponderada, sendo
que o primeiro valor tem peso 2, o segundo valor tem peso 3 e o terceiro valor tem peso 5. Vale lembrar
que a média ponderada é a soma de todos os valores multiplicados pelo seu respectivo peso, dividida
pela soma dos pesos. 
*/
#include<stdio.h>

int main()
{
    int n;
    float x[3];
    printf("Numero de casos: ");
    scanf("%i",&n);

    //peso 2 3 5

    for (int i = 0; i < n; i++)
    {
        printf("Digite as tres notas: \n");
        for (int j = 0; j < 3; j++)
        {
            scanf("%f",&x[j]);
        }
        float media = ((x[0]*2)+(x[1]*3)+(x[2]*5))/10;
        printf("Media: %.1f\n",media);
    }
    

    return 0;
}
