#include <stdio.h>

int Soma(int a, int b)
{
    return (a + b);
}

int main()
{
    int a, b;
    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de b: ");
    scanf("%d", &b);
    printf("Total  = %d\n", Soma(a, b));

    return (0);
}