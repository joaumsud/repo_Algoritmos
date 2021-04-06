/* 1. (2,5) Na fábrica de poliuretano é realizado enxerto em peças, os técnicos colocam a 
peça na esteira e inicia-se o procedimento. Sabendo-se que este enxerto aumenta 
em 13% sua massa a cada minuto. Criar um programa que entre o peso da peça e 
mostre o tempo necessário para que a massa deste material se torne maior que 100 
Kg. */
#include<stdio.h>
int main(){
    float pesoTotal;
    

    printf("Digite o peso da peca: ");
    scanf("%f",&pesoTotal);

    do{
        pesoTotal = pesoTotal / 0.13;
        pesoTotal++;
        printf("Peso total: %.2f", pesoTotal);
    }while(pesoTotal <= 100);
    
}