#include <stdio.h>

int main()
{
    int a, x, y, z;

    for (a = 0; a <= 4; a++)
    {
        printf("\nInserir um numero em X: ");
        scanf("%i", &x);
        printf("Inserir um numero em Y: ");
        scanf("%i", &y);
        if (x == y && y == y)
        {
            printf("Valor em Z: %i", x);
        }
    }
}