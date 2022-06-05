/*
Crie um programa que receba três valores (obrigatoriamente maiores que zero), representando as medidas dos três lados de um triângulo. 
Elabore funções para:

(a) Determinar se eles lados formam um triângulo, sabendo que:
    - O comprimento de cada lado de um triângulo é menor do que a soma dos outros
    dois lados.
(b) Determinar e mostrar o tipo de triângulo, caso as medidas formem um triângulo.
Sendo que:
    - Chama-se equilátero o triângulo que tem três lados iguais.
    - Denominam-se isósceles o triângulo que tem o comprimento de dois lados
    iguais.
    - Recebe o nome de escaleno o triângulo que tem os três lados diferentes. 

*/

#include<stdio.h>
#include<stdlib.h>

void triangulo(float x, float y, float z){
    if ((x > y+z) || (y > x+z) || (z > y+x))
    {
        printf("Nao e um triangulo\n");
    } else{
        if (x == y && y == z)
        {
            printf("Triangulo equilatero\n");
        } else if (x == y || y == z || z == x)
        {
            printf("Triangulo isosceles\n");
        } else {
            printf("Triangulo escaleno\n");
        }
        
    } 
}

int main()
{
    system("cls");
    float x,y,z;
    while (1)
    {
        printf("Digite os lados do triangulo: ");
        scanf("%f %f %f",&x,&y,&z);
        if (x > 0 && y > 0 && z > 0)
        {
            triangulo(x,y,z);
        } else{
            break;
        }
        
    }
    
    return 0;
}
