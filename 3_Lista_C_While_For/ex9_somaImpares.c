/*
Problema "soma impares" (adaptado de URI 1071)
Leia 2 valores inteiros X e Y (em qualquer ordem). A seguir, calcule e mostre a soma dos números
impares entre eles. 
*/
#include<stdio.h>

int main()
{
    int x,y,sum,temp;

    scanf("%i %i",&x,&y);
    
    if (x>y)
    {
        temp = y;
        y = x;
        x = temp;
    }

    if (x % 2 == 0)
    {
        x += 1;
        for (x; x < y; x+=2)
        {
            sum += x;
        }
        printf("Soma dos impares: %i",sum);
    } else{
        x += 2;
        for (x; x < y; x+=2)
        {
            sum += x;
        }
        printf("Soma dos impares: %i",sum);
    }

    return 0;
}
