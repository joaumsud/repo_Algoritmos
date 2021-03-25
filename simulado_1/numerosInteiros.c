#include<stdio.h>
#include<stdlib.h>

int main(){
    int numero1, numero2;
    printf("Digite o valor do primeiro numero: \n");
    scanf("%d",&numero1);
    printf("Digite o valor do segundo numero: \n");
    scanf("%d",&numero2);
    if(numero1 >= 0 && numero2 >= 0){
        if(numero1 > numero2){
            printf("Primeiro numero maior que o segundo numero e seu valor corresponde a: %.d\n",numero1);
        }else if(numero2 > numero1){
            printf("Segundo numero maior que o primeiro numero e seu valor corresponde a: %.d\n",numero2);
        }else {
            printf("Os numero sao iguais");
        }
    }else{
        printf("Um dos numeros nao é positivo!");
    }
}