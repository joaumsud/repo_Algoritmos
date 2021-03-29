/* 3. (4,0) A empresa de suco “CaldoDeCana” resolveu realizar descontos em 
sua linha de produtos. O valor total da compra dependem do produto e da 
quantidade, conforme o esquema na tabela abaixo. Desenvolva um 
programa que leia o código do suco e a quantidade comprada. O programa
deve calcular o custo final da conta e escrever o valor a ser pago. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char produto;
    float valorTotal;
    int quantidade;

    printf("Listas de produtos: \nA - Suco acai \nB - Suco de beterraba \nC - Suco de cana\n");
    printf("Selecione o produto: ");
    scanf("%c", &produto);
    printf("Digite a quantidade ");
    scanf("%d", &quantidade);
    switch (produto)
    {
    case 'A':
        if (quantidade <= 5)
        {
            valorTotal = quantidade * 3;
            printf("Valor total a pagar: R$ %.2f", valorTotal);
        }
        else if (quantidade > 5 && quantidade <= 15)
        {
            valorTotal = quantidade * 2.60;
            printf("Valor total a pagar: R$ %.2f", valorTotal);
        }
        else if (quantidade > 15)
        {
            valorTotal = quantidade * 2.10;
            printf("Valor total a pagar: R$ %.2f", valorTotal);
        };
        break;
    case 'B':
        if (quantidade <= 5)
        {
            valorTotal = quantidade * 4;
            printf("Valor total a pagar: R$ %.2f", valorTotal);
        }
        else if (quantidade > 5 && quantidade <= 15)
        {
            valorTotal = quantidade * 3.50;
            printf("Valor total a pagar: R$ %.2f", valorTotal);
        }
        else if (quantidade > 15)
        {
            valorTotal = quantidade * 3.00;
            printf("Valor total a pagar: R$ %.2f", valorTotal);
        };
        break;
    case 'C':
        if (quantidade <= 5)
        {
            valorTotal = quantidade * 5;
            printf("Valor total a pagar: R$ %.2f", valorTotal);
        }
        else if (quantidade > 5 && quantidade <= 15)
        {
            valorTotal = quantidade * 4.30;
            printf("Valor total a pagar: R$ %.2f", valorTotal);
        }
        else if (quantidade > 15)
        {
            valorTotal = quantidade * 3.70;
            printf("Valor total a pagar: R$ %.2f", valorTotal);
        };
        break;
    default:
        printf("Opcao invalida! Escolha as opcoes entre A, B ou C");
    }
}
