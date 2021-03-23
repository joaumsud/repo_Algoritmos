#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "");
    int numero, multiplicador, fatorial = 1;
    printf("Digite um numero qualquer: ");
    scanf("%d",&numero);
    for(multiplicador =1; multiplicador <= numero; multiplicador++){
        fatorial = multiplicador * fatorial;
    }
    printf("Fatorial= %d\n", fatorial);
    return(0);
}