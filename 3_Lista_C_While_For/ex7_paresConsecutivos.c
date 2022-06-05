/*
Problema "pares consecutivos" (adaptado de URI 1159)
O programa deve ler um valor inteiro X indefinidas vezes. (O programa irá parar quando o valor de X
for igual a 0). Para cada X lido, imprima a soma dos 5 pares consecutivos a partir de X, inclusive o X
, Se for par. Se o valor de entrada for 4, por exemplo, a saída deve ser 40, que é o resultado da operação:
4+6+8+10+12, enquanto que se o valor de entrada for 11, por exempo, a saída deve ser 80, que é a
soma de 12+14+16+18+20. 

*/
#include<stdio.h>

int main()
{
    while (2>1)
    {
        int x,sum=0;
        printf("Digite o numero: ");
        scanf("%i",&x);
        if (x == 0)
        {
            break;
        } else{
            if(x % 2 == 0){
                for (int i = 0; i < 5; i++)
                {
                    sum += x;
                    x += 2;
                }
                printf("%i\n",sum);
            } else{
                x += 1;
                for (int i = 0; i < 5; i++)
                {
                    sum += x;
                    x += 2;
                }
                printf("%i\n",sum);
            }
        }
        
    }
    

    return 0;
}
