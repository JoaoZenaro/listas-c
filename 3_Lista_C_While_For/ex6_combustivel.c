/*
Problema "combustivel" (adaptado de URI 1134)
Um posto de combustíveis deseja determinar qual de seus produtos tem a preferência de seus clientes.
Escreva um algoritmo para ler o tipo de combustível abastecido (codificado da seguinte forma:
I.Álcool 2.Gasolina 3.Diesel 4.Fim). Caso o usuário informe um código inválido (fora da faixa de 1 a
4) deve ser solicitado um novo código (até que seja válido). O programa será encerrado quando o
código informado for o número 4, devendo então mostrar a mensagem "MUITO OBRIGADO", bem como as quantidades de cada combustível. 
*/
#include<stdio.h>

int main()
{
    int e;
    int pref[3] = {0,0,0};

    while (2>1)
    {
        printf("Digite o numero de uma preferencia:\n");
        printf("1.Alcool\n2.Gasolina\n3.Diesel\n4.Fim\n");
        scanf("%i",&e);
        if (e > 0 && e < 5)
        {
            if (e == 1)
            {
                pref[0]++;
            } else if (e == 2)
            {
                pref[1]++;
            } else if (e == 3)
            {
                pref[2]++;
            } else{
                printf("Muito Obrigado\n");
                printf("As quantidades foram:\n  Alcool: %i\n  Gasolina: %i\n  Diesel: %i",pref[0],pref[1],pref[2]);
                break;
            }
            
        } else {
            printf("Invalido\n");
            continue;
        }
        
    }
    

    return 0;
}
