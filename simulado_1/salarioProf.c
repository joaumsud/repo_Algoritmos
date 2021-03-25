#include <stdio.h>
#include <math.h>

int main()
{
    float valorHora, inss, soma, salario;
    int numeroAula;

    printf("Digite o valor da hora de cada aula: \n");
    scanf("%f", &valorHora);
    printf("Digite o numero de aulas dadas: \n");
    scanf("%d", &numeroAula);
    printf("Digite o valor do desconto do inss: \n");
    scanf("%f", &inss);

    soma = valorHora * numeroAula;

    salario = soma-((inss/100)*soma);

    printf("Valor total do salario sem desconto = %.2f\n", soma);
    printf("Valor salario com desconto INSS = %.2f\n", salario);
    
}