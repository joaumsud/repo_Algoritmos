#include <stdio.h>
int main()
{
    int n, x, contaneg = 0;
    for (x = 1; x <= 5; x++)
    {
        printf("Digite um valor qualquer: ");
        scanf("%d", &n);
        if (n < 0)
        {
            contaneg++;
        }
    }
    printf("Quantidade de numeros negativos = %d\n", contaneg);

    return (0);
}