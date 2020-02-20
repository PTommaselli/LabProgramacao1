#include <stdio.h>

void main()
{
    float peso, total;//declaracao das variaveis

    printf("insira o valor do peso: ");//recebe o valor do peso
    scanf("%f", &peso);//aloca o valor na variavel

    total=peso*22.00;//calcula o preco  a partir do peso inserido vezes o valor por quilo

    printf("O preco total eh: %f", total);//imprime o valor final
}
