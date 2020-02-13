#include <stdio.h>

void main()
{
    float Watts, Largura, Comprimento, Area, WattsTotal, Total;//input values

    printf("insira o valor da Lagura: ");//inside values to width
    scanf("%f", &Largura);//read values to width

    printf("insira o valor do Comprimento: ");//inside values to lenght
    scanf("%f", &Comprimento);//read values to lenght

    printf("insira o valor do Watts: ");//inside values to watts
    scanf("%f", &Watts);//read values to watts

    Area=Largura*Comprimento;//calculated area
    WattsTotal=Watts/20;//calculated total power
    Total=Area/WattsTotal;//calculated the power by area

    printf("A potencia necessaria eh: %f", Total);//printed total value

    return 0;
}
