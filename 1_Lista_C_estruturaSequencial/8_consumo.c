#include <stdio.h>

int main()
{
    int dist;
    float combustivelGasto;

    printf("Distancia percorrida: ");
    scanf("%i",&dist);

    printf("Combustivel gasto: ");
    scanf("%f",&combustivelGasto);

    float media = (float)dist/combustivelGasto;

    printf("Consumo medio = %.3f",media);

    return 0;
}