/*
Leia os valores das coordenadas X e Y de um ponto no plano cartesiano. 
A seguir, determine qual o quadrante ao qual pertence o ponto (QI, Q2, Q3 ou Q4). Se o ponto estiver na origem, 
escreva a mensagem "Origem". Se o ponto estiver sobre um dos eixos escreva "Eixo X" ou "Eixo Y", conforme for a situação.

    q2  |   q1
        |
--------|--------
        |
    q3  |   q4

*/

#include<stdio.h>

int main()
{
    int x,y;

    printf("x y: ");
    scanf("%i %i",&x,&y);

    if (x == 0 && y == 0) {
        printf("(%i,%i) pertence a origem",x,y);

    } else if (x == 0) {
        printf("(%i,%i) pertence ao eixo Y",x,y);

    } else if (y == 0) {
        printf("(%i,%i) pertence ao eixo X",x,y);

    } else if (x > 0) {
        if (y > 0){
            printf("(%i,%i) pertence ao quadrante Q1",x,y);

        } else {
            printf("(%i,%i) pertence ao quadrante Q4",x,y);

        }
    } else if(x < 0){
        if (y > 0) {
            printf("(%i,%i) pertence ao quadrante Q2",x,y);
        } else {
            printf("(%i,%i) pertence ao quadrante Q3",x,y);
        }
        
    }
    
    return 0;
}
