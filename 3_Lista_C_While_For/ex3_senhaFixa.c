/*
Problema "senha fixa" (adaptado de URI 1114)
Escreva um programa que repita a leitura de uma senha até que ela seja válida. Para cada leitura de
senha incorreta informada, escrever a mensagem "Senha Invalida! Tente novamente:". Quando a senha
for informada corretamente deve ser impressa a mensagem "Acesso Permitido" e o algoritmo
encerrado. Considere que a senha correta é o valor 2002. 
*/
#include<stdio.h>

int main()
{
    int senha;

    while (2>1)
    {
        scanf("%i",&senha);
        if (senha == 2002){
            printf("Acesso Permitido");
            break;
        } else{
            printf("Senha Invalida! Tente novamente:\n");
        }
    }
    
    

    return 0;
}
