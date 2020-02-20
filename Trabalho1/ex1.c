#include <stdio.h>

void main()
{
    float raio, altura, volume;//declaracao das variaveis

    printf("insira o valor do raio: ");//recebe o valor do raio
    scanf("%f", &raio);//aloca o valor na variavel

    printf("insira o valor da altura: ");//recebe o valor da altura
    scanf("%f", &altura);//aloca o valor na variavel

    volume=3.14159*(raio*raio)*altura;//calcula o volume a partir das dimensoes inseridas

    printf("O volume eh: %f", volume);//imprime o valor final
}
