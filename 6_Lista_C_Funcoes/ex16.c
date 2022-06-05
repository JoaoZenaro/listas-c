/*
Faça uma função chamada DesenhaLinha. Ele deve desenhar uma linha na tela usando
vários símbolos de igual (Ex: ========). A função recebe por parâmetro quantos sinais
de igual serão mostrados. 
*/

#include<stdio.h>

void desenhaLinha(int n){
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("=");
    }
    printf("\n");
}

int main()
{
    desenhaLinha(50);
    return 0;
}
