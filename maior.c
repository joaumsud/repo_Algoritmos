#include <stdio.h>

int main()

{
    float n1, n2, n3;

    printf("Digite a nota 1: ");

    scanf("%f", &n1);

    printf("Digite a nota 2: ");

    scanf("%f", &n2);

    printf("Digite a nota 3: ");

    scanf("%f", &n3);

    if (n1 > n2 && n1 > n3)
    {
        printf("O número 1 eh o maior de todos = %.2f",n1);
    }
    else if (n2 > n1 && n2 > n3)
    {
        printf("O número 2 eh o maior de todos = %.2f",n2);
    }
    else if (n3 > n1 && n3 > n2)
    {
        printf("O número 3 eh o maior de todos = %.2f",n3);
    }
    return (0);
}