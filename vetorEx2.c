#include <stdio.h>
int main()
{
    int v[10], x;
    for (x = 0; x <= 9; x++)
    {
        printf("Entrar com o elemento da posicao [%d]:", x, v[x]);
        scanf("%d", &v[x]);
        if (x <= 30)
        {

            x = 1;
        }
    }

    return (0);
}