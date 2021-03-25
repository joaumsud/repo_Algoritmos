/* tentativa */
#include<stdio.h>
#include<math.h>

int main(){
    int f, soma = 0;
    printf("Digite o numero 1 para comecar a contagem\n");
    scanf("%d",&f);
    while(f>=1){
        f = f + soma;
        soma = f - soma;
        printf("%d\n",f);
    }
}