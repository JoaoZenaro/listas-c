#include<stdio.h>
#include<math.h>

int main()
{
    float base, altura, area, perimetro, diagonal;

    printf("Digite a base: ");
    scanf("%f",&base);

    printf("Digite a altura: ");
    scanf("%f",&altura);
    
    area = base*altura;
    perimetro = 2*(base+altura);
    diagonal = sqrt((base*base)+(altura*altura));

    printf("Area = %.4f\n",area);
    printf("Perimetro = %.4f\n",perimetro);
    printf("Diagonal = %.4f",diagonal);
    
    

    return 0;
}
