#include <stdio.h>

void main()
{
    float nmr1, nmr2, nmr3, totalSoma, totalMedia;//input variales

    printf("insira um 1 numero: ");//inside values to number 1
    scanf("%f", &nmr1);//read values to number 1

    printf("insira um 2 numero: ");;//inside values to number 2
    scanf("%f", &nmr2);//read values to number 2

    printf("insira um 3 numero: ");//inside values to number 3
    scanf("%f", &nmr3);//read values to number 3

    totalSoma=nmr1+nmr2+nmr3;//calculate the soma between number 1, number 2 and number 3
    totalMedia=totalSoma/3;//calculate the avorage of soma

    printf("A soma eh: %f \n a media eh: %f", totalSoma, totalMedia);//printed final values

    return 0;
}
