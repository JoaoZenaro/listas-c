#include<stdio.h>

int main()
{
    char nome[20];
    float valorHora, pagamento;
    int horasTrab;

    printf("Nome: ");
    gets(nome);
    // scanf("%s",&nome);

    printf("Valor por hora: ");
    scanf("%f",&valorHora);

    printf("Horas trabalhadas: ");
    scanf("%i",&horasTrab);
    
    pagamento = valorHora*horasTrab;
    
    printf("\nO pagamento para %s deve ser: %.2f",nome,pagamento);

    return 0;
}
