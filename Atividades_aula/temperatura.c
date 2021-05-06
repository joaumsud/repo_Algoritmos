#include <stdio.h>
/*arrumar*/
int main()
{
    char termometro;
    float temperatura;
    int c, f;
    printf("Escolha o Termometro: \n");
    printf("C - Celsius \n");
    printf("F - Fahrenheit \n");
    scanf("%c", &termometro);
    printf("Digite a Temperatura: \n");
    scanf("%f", &temperatura);

    if (termometro == c)
    {
        f = ((9 / 5) * temperatura) + 32;
        printf("A temperatura em Fahrenheit é: %.2f\n", f);
    }
    else if (termometro == f)
    {
        c = (temperatura - 32) * 1.8;
        printf("A temperatura em Celcius é: %.2f\n", c);
    }
    else
    {
        printf("Opcao invalida!");
    }
}