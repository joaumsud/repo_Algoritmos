#include <stdio.h>
int main(){
    int a,b;

    printf("Digite o valor de A: ");
    scanf("%d",&a);
    printf("Digite o valor de B: ");
    scanf("%d",&b);

    if(a==b){
        printf("Soma de A + B= %d", a+b);
    }else{
        printf("Multiplicacao de A e B= %d", a*b);
    }

    return(0);
}