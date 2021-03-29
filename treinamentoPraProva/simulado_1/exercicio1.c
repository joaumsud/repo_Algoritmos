/* 1. (2,5) A importadora de jogos eletrônicos “GameBoi” está comercializando 
um novo jogo no Brasil. Entretanto ela precisa calcular o valor do produto no 
país incluindo o imposto. Desenvolva um programa que leia o custo do jogo 
em dólar e calcule o novo valor em reais, adicionando ao cálculo o imposto 
de importação no valor de 32% do valor do produto em Reais. O programa 
deverá exibir o valor em reais do produto, o valor do imposto e o valor final 
(valor em reais+imposto). Sabe-se que a cotação de US$ 1.00 é: R$ 5.25. */

#include<stdio.h>
#include<stdlib.h>

int main(){
    float valorJogo, imposto, valorFinal, precoDoDolar = 5.25, valorConversao;

    printf("Insira o valor do jogo em US$: ");
    scanf("%f", &valorJogo);
    
    valorConversao = precoDoDolar * valorJogo;
    imposto = valorConversao * 0.32;
    valorFinal = valorConversao + imposto;

    printf("Valor em R$: %.2f\n",valorConversao);
    printf("Imposto: R$ %.2f\n", imposto);
    printf("Valor final: R$ %.2f", valorFinal);

    return(0);

}
