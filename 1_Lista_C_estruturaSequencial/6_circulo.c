#include<stdio.h>

int main()
{
    float raio,area;
    const float pi = 3.14159;

    printf("Raio: ");
    scanf("%f",&raio);
    
    area = raio*raio*pi;

    printf("\nArea = %.3f",area);

    return 0;
}
