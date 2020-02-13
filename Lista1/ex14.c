#include <stdio.h>

void main()
{
    float Largura, Comprimento, QuantidadeLata, PrecoTotal;//input variables

    printf("insira o valor da Largura: ");//inside values to lenght
    scanf("%f", &Largura);//read values to lenght

    printf("insira o valor do Comprimento: ");//inside values to width
    scanf("%f", &Comprimento);//read values to width
    
    QuantidadeLata=(((Largura*Comprimento)/13)/3.6);//calculated the amount of paint cans
    PrecoTotal=QuantidadeLata*25;//calculated total price of the total amount of paint cans 

    printf("O preco final eh: %f\nQuantidade de Latas: %f", PrecoTotal, QuantidadeLata);//printed the total price and total amount of paint cans
    return 0;
}