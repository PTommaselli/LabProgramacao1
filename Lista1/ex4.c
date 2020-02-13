#include <stdio.h>

void main()
{
    float nmr1, nmr2, total;//input variable

    printf("insira um 1 numero: ");;//inside values to number 1
    scanf("%f", &nmr1);//read values to number 1

    printf("insira um 2 numero: ");;//inside values to number 2
    scanf("%f", &nmr2);//read values to number 2

    total=nmr1*nmr2;//calculated the multiplication between number 1 and number 2

    printf("O produto eh: %f", total);//printed total value

    return 0;
}
