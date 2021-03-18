#include<stdio.h>
int main()
{
    int n, fatorial = 1;
    while(n > 0 ){
        printf("Digite um numero: ");
        scanf("%d",&n);
        while (n > 1){
            fatorial = fatorial * n;
            n = n - 1;
        }
        printf("Valor do fatorial e: %d\n", fatorial );
    }

}