#include <stdio.h>

void main()
{
    float nmr1, nmr2, nmr3, totalSoma, totalMedia;//input variable

    printf("insira um 1 numero: ");;//inside values to number 1
    scanf("%f", &nmr1);//read values to number 1

    printf("insira um 2 numero: ");;//inside values to number 2
    scanf("%f", &nmr2);//read values to number 2

    totalSoma=nmr1+nmr2;//calculate the soma between number 1 and number 2
    totalMedia=totalSoma/2;//calculate the avorage of soma

    printf("A soma eh: %f \n a media eh: %f", totalSoma, totalMedia);//printed final values

    return 0;

}
