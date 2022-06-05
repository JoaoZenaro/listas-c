/*
Problema "quadrante" (adaptado de URI 1115)
Escreva um programa para ler as coordenadas (X,Y) de uma quantidade indeterminada de pontos no
sistema cartesiano. Para cada ponto escrever o quadrante a que ele pertence (Q1, Q2, Q3 ou Q4). O
algoritmo será encerrado quando pelo menos uma de duas coordenadas for NULA (nesta situação sem
escrever mensagem alguma).
q2  |  q1
----|-----
q3  |  q4
*/
#include<stdio.h>

int main()
{
    int x,y;

    while (2>1)
    {
        scanf("%i %i",&x,&y);
        if (x == 0 || y == 0) {
            break;

        } else if (x > 0) {
            if (y > 0){
            printf("(%i,%i) pertence ao quadrante Q1\n",x,y);

            } else {
            printf("(%i,%i) pertence ao quadrante Q4\n",x,y);

            }
        } else if(x < 0){
            if (y > 0) {
            printf("(%i,%i) pertence ao quadrante Q2\n",x,y);
            } else {
            printf("(%i,%i) pertence ao quadrante Q3\n",x,y);
            }

        }
        
    }
    

    return 0;
}
