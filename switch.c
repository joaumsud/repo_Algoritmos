#include <stdio.h>
int main()
{
    int peso, opcao;
    float pesoFinal;

    printf("Digite o seu peso na Terra: ");
    scanf("%d", &peso);
    printf("Digite a opcao de planeta: \n");
    printf("1 - Mercurio \n");
    printf("2 - Venus \n");
    printf("3 - Marte \n");
    printf("4 - Jupter \n");
    printf("5 - Saturno \n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        pesoFinal = peso * 0.37;
        break;
    case 2:
        pesoFinal = peso * 0.88;
        break;
    case 3:
        pesoFinal = peso * 0.38;
        break;
    case 4:
        pesoFinal = peso * 2.64;
        break;
    case 5:
        pesoFinal = peso * 1.15;
        break;
    }
    printf("Peso Final = %f\n", pesoFinal);

    return (0);
}