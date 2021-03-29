/* 2.(3,5) A concessionária de veículos “CARANGO VELHO” está vendendo os 
seus veículos com desconto. Faça um programa que leia o valor do carro e 
o ano e calcule e exiba o valor do desconto e o valor a ser pago pelo cliente. 
O desconto deverá ser calculado de acordo com o ano do veículo. Até 2000 
- 12%, até 2006 - 9% e acima - 7%. */

#include<stdio.h>
#include<stdlib.h>

int main(){

    float valorCarro, desconto, valorFinal;
    int ano;

    printf("Insira o valor do carro: \nR$ ");
    scanf("%f",&valorCarro);
    printf("Insira o ano do carro: \n");
    scanf("%d",&ano);

    if(ano <= 2000){
        desconto = valorCarro * 0.12;
        valorFinal = valorCarro - desconto;
        printf("Valor do desconto: R$ %.2f\n", desconto);
        printf("Valor final: R$ %.2f\n", valorFinal);
    }else if (ano > 2000 && ano <= 2006)
    {
        desconto = valorCarro * 0.09;
        valorFinal = valorCarro - desconto;
        printf("Valor do desconto: R$ %.2f\n", desconto);
        printf("Valor final: R$ %.2f\n", valorFinal);
    }else if (ano > 2006)
    {
        desconto = valorCarro * 0.07;
        valorFinal = valorCarro - desconto;
        printf("Valor do desconto: R$ %.2f\n", desconto);
        printf("Valor final: R$ %.2f\n", valorFinal);
    }
    return(0);
}

