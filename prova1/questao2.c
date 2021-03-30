/* 2 – O perímetro de um paralelogramo é calculado pela seguinte fórmula 2(a + b).
Montar um programa em C que possa exibir este valor. */

#include<stdio.h>
int main(){
    float a, b, total;

    printf("Inserir valor de A: ");
    scanf("%f",&a);
    printf("Inserir valor de B: ");
    scanf("%f",&b);

    total = (a + b) * 2;

    printf("O perimetro do paralelogramo e: %.2f",total);
}