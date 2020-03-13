#include <stdio.h>

void main()
{
    int lanche, quantidade;
    float preco;

    printf("Qual o codigo do lanche? ");
    scanf("%d", &lanche);

    printf("Qual a quantidade?");
    scanf("%d", &quantidade);

    switch(lanche)
    {
    case 100:
        preco=9.50;
        break;
    case 101:
        preco=8.50;
        break;
    case 102:
        preco=7.00;
        break;
    case 103:
        preco=8.00;
        break;
    case 104:
        preco=5.50;
        break;
    default:
        printf("codigo inesistente");
    }

    printf("Preco Total: %.2f", preco*quantidade);
}
