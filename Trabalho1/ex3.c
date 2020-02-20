#include <stdio.h>

void main()
{
    float salario_vendedor, vendas_totais, total_salario; //variaveis declaradas

    printf("insira o valor do salario: ");//recebe o valor para o salario atual do vendedor
    scanf("%f", &salario_vendedor);//aloca o valor na variavel

    printf("insira o valor das vendas do mes: ");//recebe o valor para o total que ele vendeu no mes
    scanf("%f", &vendas_totais);//aloca o valor na variavel

    total_salario=salario_vendedor+(vendas_totais*0.5);//calcula a promocao adiquirida pelo vendedor em 5% do total das vendas

    printf("O valor eh: %f", total_salario);//imprime o valor total
}

