/*
Faça uma função que receba a data atual (dia, mês e ano em inteiro) e exiba-a na tela
no formato textual por extenso. Exemplo: Data: 01/01/2000, Imprimir: 1 de janeiro de
2000. 
*/

#include<stdio.h>
#include<stdlib.h>

void *data(char *data){
    char mes[2], dia[3], *result;
    dia[0] = data[0];
    dia[1] = data[1];
    dia[2] = '\0';
    
    mes[0] = data[3];
    mes[1] = data[4];

    char ano[5] = {data[6],data[7],data[8],data[9],'\0'};    

    int iMes = atoi(mes);
    int iDia = atoi(dia);

    switch (iMes)
    {
    case 1:
        result = "Janeiro";
        break;
    case 2:
        result = "Fevereiro";
        break;
    case 3:
        result = "Março";
        break;
    case 4:
        result = "Abril";
        break;
    case 5:
        result = "Maio";
        break;
    case 6:
        result = "Junho";
        break;
    case 7:
        result = "Julho";
        break;
    case 8:
        result = "Agosto";
        break;
    case 9:
        result = "Setembro";
        break;
    case 10:
        result = "Outubro";
        break;
    case 11:
        result = "Novembro";
        break;
    case 12:
        result = "Dezembro";
        break;    
    default:
        break;
    }
    
    printf("%i de %s de %s",iDia,result,ano);
}

int main()
{
    data("02/12/2000");
    return 0;
}
