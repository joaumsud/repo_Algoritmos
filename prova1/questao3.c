/* 3 - Faça um algoritmo que leia a capacidade máxima de peso suportada por um elevador 
e o peso de 5 pessoas. O programa precisa informar se o elevador está em condições 
para subir ou se excedeu a carga máxima permitida. */

#include<stdio.h>
#include<stdlib.h>

int main(){

    int pesoMaximo;
    float pessoa1, pessoa2, pessoa3, pessoa4, pessoa5, total;

    printf("Peso maximo: ");
    scanf("%d",&pesoMaximo);
    printf("Peso 1: ");
    scanf("%f",&pessoa1);
    printf("Peso 2: ");
    scanf("%f",&pessoa2);
    printf("Peso 3: ");
    scanf("%f",&pessoa3);
    printf("Peso 4: ");
    scanf("%f",&pessoa4);
    printf("Peso 5: ");
    scanf("%f",&pessoa5);

    total = pessoa1 + pessoa2 + pessoa3 + pessoa4 + pessoa5;

    if(total > pesoMaximo){
        printf("Peso maximo excedido!");
    }else{
        printf("Esta em condicoes de subir!");
    }

}